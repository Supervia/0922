import math as m
  
def getPosOfRightmostSetBit(n):   
    return (m.log(((n & - n) + 1),2))

def getPosOfRightMostUnsetBit(n):    
    if (n == 0):
        return 1      
    if ((n & (n + 1)) == 0):
        return -1      
    return getPosOfRightmostSetBit(~n)   

n = int(input())

ans = getPosOfRightMostUnsetBit(n)
print(ans)
 
print (round(ans))
