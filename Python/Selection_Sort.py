def selection_sort(arr,n):
    for i in range(0,len(arr)):
        min_idx=i
        for j in range (i+1,len(arr)):
            if arr[j]<arr[min_idx]:
                min_idx=j
        if(min_idx!=i):
            temp=arr[i]
            arr[i]=arr[min_idx]
            arr[min_idx]=temp
    for i in range(0,len(arr)):
        print("%d" % arr[i],end=" ")

l=list(map(int,input().split()))
n=len(l)
selection_sort(l,n)