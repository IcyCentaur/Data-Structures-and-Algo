def solve(x):
    if("+" in x):
        return 1
    return -1
    
    
out = 0
s = int(input())
for i in range(s):
    x = input()
    out += solve(x)
print(out)
