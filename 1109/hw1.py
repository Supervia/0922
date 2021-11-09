def isEven(n):
    if n^1 == n+1:
        return 1
    else:
        return 0

n = int(input("비트 연산을 통해 짝수, 홀수 판별하기\n"))

if isEven(n) == 1:
    print("Even")
else:
    print("Odd")
