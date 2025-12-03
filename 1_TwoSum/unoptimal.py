"""
This is actually my first leetcode solution, where I wanted to test out my memory of Python syntax. NOT an optimal solution (which requires a HashMap I believe).
"""
class Solution(object):
    def twoSum(self, nums, target):
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                if ((target - nums[i]) == nums[j]):
                    return [i,j]
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
