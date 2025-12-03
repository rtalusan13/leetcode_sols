class Solution(object):
    def maximum69Number (self, num):
        array = list(map(int, str(num)))
        sum = 0
        i = 0
        while(i < len(array)):
            if(array[i] == 6):
                array[i] = 9
                break
            i += 1
        for i in range(0,len(array)):
            sum *= 10
            sum += array[i]
        return sum

        """
        :type num: int
        :rtype: int
        """
        
