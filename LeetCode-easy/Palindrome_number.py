def ispalindrome(x):
    z,p = x,0
    while z:
        p *= 10
        p += z%10
        z = z//10
    return x==p
