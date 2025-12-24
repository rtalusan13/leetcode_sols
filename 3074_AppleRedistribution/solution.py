class Solution(object):
    def minimumBoxes(self, apple, capacity):
        asum = 0
        for i in apple:
            asum += i
        sorted_capacity = sorted(capacity)
        count = 0
        while(asum > 0):
            use = sorted_capacity.pop(-1)
            asum -= use
            count += 1
        return count
        """
        :type apple: List[int]
        :type capacity: List[int]
        :rtype: int
        """
        
