def ins():
    t = (input().split())
    k = int(t[1])
    x = (input())
    y =  [(a) for a in x ]
    for i in range(len(x)):
        if(int(x[i]) < k):
            y.insert(i, str(k))
            return "".join(y)
    y.insert(len(x), str(k))
    return "".join(y)


test = int(input())
for i in range(test):
    print(ins())
    
