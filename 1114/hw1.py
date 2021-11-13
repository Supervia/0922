def findElement(arr, n):
    for i in range(1, n):
        j = i-1
        k = i+1
        while arr[j] < arr[i] and arr[k] > arr[i]:
            if j==0 and k == n-1:
                return i
            if j > 0:
                j-=1
            if k<n-1:
                k+=1
    return -1

arr = [ 5, 1, 4, 3, 6, 8, 10, 7, 9 ]
n = len(arr)
idx = findElement(arr, n)
print(idx)
