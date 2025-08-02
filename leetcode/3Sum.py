def binarySearch(arr, target):
    low = 0
    high = len(arr)-1
    mid =0
    while low<=high:
        mid = (high + low)//2
        if arr[mid]<target:
            low = mid +1
        elif arr[mid]<target:
            high = mid -1
        else:
            return mid
    return -1

def threeSum(nums):
    nums.sort()
    for i in range(0,len(nums)):
        for j in range(i+1, len(nums)):


threeSum(23)