def findElement(arr, n):
    leftMax = [0] * n
    leftMax[0] = float('-inf')
    for i in range(1, n):
        if leftMax[i - 1] > arr[i - 1]:
            leftMax[i] = leftMax[i - 1]
        else:
            leftMax[i] = arr[i - 1]
    print(leftMax)
    rightMin = [0]*n
    rightMin[n-1] = float('inf')
    for i in range(n-2, 0, -1):
        if rightMin[i + 1] > arr[i + 1]:
            rightMin[i] = arr[i + 1]
        else:
            rightMin[i] = rightMin[i + 1]
    print(rightMin)
    
    sts = 0;
    for i in range(0, n):
        if leftMax[i] < arr[i] and rightMin[i] > arr[i]:
            print(i)
            sts = 1
    if sts == 0:
        print("-1")
        
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9]
n = len(arr)
findElement(arr, n)
