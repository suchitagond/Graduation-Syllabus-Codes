import random

def deterministic_quick_sort(arr, low, high):
    if low < high:
        pi = partition_deterministic(arr, low, high)
        deterministic_quick_sort(arr, low, pi - 1)
        deterministic_quick_sort(arr, pi + 1, high)

def partition_deterministic(arr, low, high):
    pivot = arr[high] 
    i = low - 1        
    for j in range(low, high):
        if arr[j] < pivot:
            i = i + 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def randomized_quick_sort(arr, low, high):
    if low < high:
        pi = partition_randomized(arr, low, high)
        randomized_quick_sort(arr, low, pi - 1)
        randomized_quick_sort(arr, pi + 1, high)

def partition_randomized(arr, low, high):
    rand_pivot = random.randint(low, high)
    arr[high], arr[rand_pivot] = arr[rand_pivot], arr[high]  # Swap with the last element
    return partition_deterministic(arr, low, high)

def test_quick_sort():
    # n=int(input("No. of elements in an array : "))
    # arr=[]
    # for i in range(n):
    #     a=int(input())
    #     arr.append(a)
    arr = list(map(int, input("Enter numbers separated by space: ").split()))
    
    print("\nOriginal array:", arr)

    arr_deterministic = arr.copy()
    deterministic_quick_sort(arr_deterministic, 0, len(arr_deterministic) - 1)
    print("Sorted array (Deterministic QuickSort):", arr_deterministic)

    arr_randomized = arr.copy()
    randomized_quick_sort(arr_randomized, 0, len(arr_randomized) - 1)
    print("Sorted array (Randomized QuickSort):", arr_randomized)

test_quick_sort()
