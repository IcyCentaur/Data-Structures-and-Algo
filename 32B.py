def solve(s):
    st = []
    i = 0
    while(i < len(s)):
        if(s[i] == "."):
            st.append('0')
            i = i + 1
            continue
        elif(s[i] == '-'):
            if(s[i+1] == "."):
                st.append('1')
                i = i + 2
            elif(s[i+1] == "-"):
                st.append('2')
                i = i + 2
    print("".join(st))
s = input()
solve(s)
