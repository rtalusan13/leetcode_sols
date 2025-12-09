class Solution(object):
    def climbStairs(self, n):
        prev = 0
        curr = 1
        for i in range(0,n):
            curr += prev
            prev = curr - prev
        return curr
        """
        :type n: int
        :rtype: int
        """
        