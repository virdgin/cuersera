a = int(input())
s, n = 1, 0
while s != a+1:
    n += (1/(s*s))
    s += 1
print(n)
