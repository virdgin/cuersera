n = int(input())
while n != 0:
    if n == 1:
        print('YES')
    elif n % 2 != 0:
        print('NO')
    else:
        n = n // 2
