"""Given a string of binary string compring of 1 , 0 or ?, replace the ? with 0 or 1 
and return a sorted list with the decimal equivalent of all the numbers"""




def StrToInt(input):
    n = len(s)
    res = 0
    base = 1
    for i in range(n):
        res += base*int(input[n-1-i])
        base *=2
        
    return res

def gen(s):
    print(" function called")
    print("S in dunction call",s)
    if "?" in s[0]:
        f = s[0]
        sec = s[0]
        k = f.index("?")
        b = f[0:k+1].replace("?","1")+f[k+1:]
        c = sec[0:k+1].replace("?","0")+sec[k+1:]
        s.pop(0)
        s.append(b)
        s.append(c)
        print("S again is",s)
        return gen(s)
    else:
        return s
        


if __name__ == "__main__":
    
    s = "11?1"
    z = []
    z.append(s)
    m = gen(z)
    l = []
    for i in m:
        l.append(StrToInt(i))
        
    l.sort()
    print(l)
