class Solution(object):
    def isOneBitCharacter(self, bits):
        i = 0
        while(i < len(bits)):
            if(i == len(bits) - 1):
                return bits[i] == 0
            elif(bits[i] == 1):
                i += 2
            else:
                i += 1
        return False

        """
        :type bits: List[int]
        :rtype: bool
        """
        
