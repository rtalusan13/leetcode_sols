class Solution(object):
    def singleNumber(self, nums):
        search = 0
        for i in range(len(nums)):
            search ^= nums[i]
        return search
        """
        :type nums: List[int]
        :rtype: int
        """
        
