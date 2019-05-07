## binary search






def BinarySearch(arr,elem):
    start = 0
    end = len(arr)
    middle = (start + end) // 2

    while (arr[middle] != elem and start <= end):

        if (elem < arr[middle]):
            end = middle -1

        else:

            start = middle + 1

        middle = (start + end) // 2

    if (arr[middle] == elem):
        return middle
    return -1





print(BinarySearch([1,2,3,4,5,6,7,8,9,10],4))
