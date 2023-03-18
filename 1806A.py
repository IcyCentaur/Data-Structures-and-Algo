def solve():
    x1, y1, x2, y2 = map(int, input().split())
    
    x = x2 - x1
    y = y2 - y1
    if x == 0 and y == 0:
        print(0)
    elif y < 0:
        print(-1)
    elif y == 0 and x > 0:
        print(-1)
    elif y == 0 and x < 0:
        print(abs(x))
    elif x == y and x > 0:
        print(x)
    elif x == 0:
        print(2*y)
    elif x > 0 and x > y:
        print(-1)
    elif x > 0 and x < y:
        print(2*y - abs(x))
    elif x < 0:
        print(abs(x) + 2*y)
 
 
test = int(input())
for i in range(test):
    solve()
