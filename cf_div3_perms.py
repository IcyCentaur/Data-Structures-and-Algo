def solve(f, inp):
  lst = []
  left = []
  temp = [x for x in inp]
  for i in range(1, f+1):
    lst.append(i)
  for i in range(len(temp) - 1, 0, -1):
    diff = temp[i] - temp[i-1]
    if(diff in lst):
      lst.remove(diff)
    else:
      left.append(diff)
  if(temp[0] in lst):
    lst.remove(temp[0])
  if(temp[0] == sum(lst)):
      print("YES")
      return
  if(len(left) == 1):
    if(sum(lst) == sum(left)):
       print("YES")
       return
  if(left == []):
    print("YES")
    return
  print("NO")
  return

test = int(input())
while(test):
    f = int(input())
    inp = list(map(int, input().split()))
    solve(f, inp)
    test -= 1




