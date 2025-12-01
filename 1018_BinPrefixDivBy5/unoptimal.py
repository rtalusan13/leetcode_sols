class Solution(object):
    def prefixesDivBy5(self, nums):
        arr = []
        x = 0
        i = 0
        for i in range(len(nums)):
            if(nums[i] == 1):
                x = (x*2) + 1
            else:
                x *= 2
            if(x % 5 == 0):
                arr.append(True)
            else:
                arr.append(False)
        return arr

        """
        :type nums: List[int]
        :rtype: List[bool]
        """
        
