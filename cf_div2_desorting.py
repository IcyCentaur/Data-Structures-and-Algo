import math
def solve(n):
  ans = n[1] - n[0]
  for i in range(len(n)-1):
    if (n[i+1] - n[i] < ans):
      ans = n[i+1] - n[i]
  if (ans%2 == 0):
    ans = ans+1
  if(ans < 0):
    return 0
  ans = math.ceil(ans/2)
  return ans

test = int(input())
while(test != 0):
    x = int(input())
    z = input().split()
    z = [int(x) for x in z]
    print(solve(z))
    test = test - 1
