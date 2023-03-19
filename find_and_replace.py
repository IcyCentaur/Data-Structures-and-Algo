    def solve():
        n = int(input())
        a = b = 0
        inp = input().strip()
        arr = ['x' for _ in range(26)]
        arr2 = ['x' for _ in range(26)]
        for i in range(len(inp)):
            idx = ord(inp[i]) - 97
            if arr[idx] == 'x':
                if i % 2 == 0:
                    arr[idx] = '0'
                    arr2[idx] = '1'
                else:
                    arr[idx] = '1'
                    arr2[idx] = '0'
            else:
                if i % 2 == 0:
                    if arr[idx] == '1':
                        a += 1
                    if arr2[idx] == '0':
                        b += 1
                else:
                    if arr2[idx] == '1':
                        b += 1
                    if arr[idx] == '0':
                        a += 1
        if a == 0 or b == 0:
            print("YES")
        else:
            print("NO")
     
     
    t = int(input())
    for i in range(t):
        solve()
