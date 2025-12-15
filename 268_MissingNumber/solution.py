class Solution(object):
    def missingNumber(self, nums):
        total = ((len(nums) + 1) * len(nums))/2
        Sum = 0
        for i in range(len(nums)):
            Sum += nums[i]
        return total - Sum
        """
        :type nums: List[int]
        :rtype: int
        """
        
