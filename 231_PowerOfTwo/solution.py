class Solution(object):
    def isPowerOfTwo(self, n):
        if(n <= 0):
            return False
        while(n > 0):
            if(n % 2 == 0):
                n //= 2
                continue
            if((n % 2 == 1) & (n > 1)):
                return False
            n //= 2
        return True
        """
        :type n: int
        :rtype: bool
        """
        
