class Solution(object):
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        val = 0
        for i in hours:
            if (i >= target):
                val += 1
        return val
        """
        :type hours: List[int]
        :type target: int
        :rtype: int
        """
        
