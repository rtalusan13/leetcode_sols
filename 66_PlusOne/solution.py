class Solution(object):
    def plusOne(self, digits):
        sum = 0
        arr = []
        for num in digits:
            sum = sum*10 + num
        sum += 1
        arr.append(sum%10)
        sum /= 10
        while(sum != 0):
            arr.insert(0,sum%10)
            sum /= 10
        return arr
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
