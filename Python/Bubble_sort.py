def bubble_sort(arr,n):
    for i in range (0 , n-1):
        for j in range(0,n-1-i):
            if arr[j]>arr[j+1]:
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    for i in range(0,n):
        print(arr[i])

arr=list(map(int,input().split()))
n=len(arr)
bubble_sort(arr,n)