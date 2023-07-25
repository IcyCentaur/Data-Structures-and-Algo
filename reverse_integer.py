class Solution:
    def reverse(self, x: int) -> int:
        flag = 0
        if(x<0):
            flag = 1
        x = abs(x)
        x = str(x)
        x = [a for a in x]
        x.reverse()
        x = ''.join(x)
        x = int(x)
     
        if( x>2147483648-1):
          return 0
        if(flag == 1):
            x = -x
        return x
