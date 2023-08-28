def insertion_sort(arr, n):
    for i in range(1, n):
        temp = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > temp:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = temp
        
    for j in range(n):
        print(arr[j])

arr = list(map(int, input().split()))
n = len(arr)
insertion_sort(arr, n)
