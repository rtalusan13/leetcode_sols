class Solution(object):
    def hasTrailingZeros(self, nums):
        ORbin = 0
        for i in range(len(nums)):
            if(nums[i] % 2 == 0):
                ORbin += 1
            if(ORbin == 2):
                return True
        return False
        """
        :type nums: List[int]
        :rtype: bool
        """
        
