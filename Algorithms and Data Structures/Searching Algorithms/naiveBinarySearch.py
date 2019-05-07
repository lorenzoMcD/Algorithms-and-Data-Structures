# This function accepts a sorted array and a value
# Create a left pointer at the start of the array, and a
# right pointer at the end of the array
# While the left pointer comes before the right pointer:
#### Create a pointer in the middle
#### If you find the value you want, return the index
#### If the value is too small, move the left pointer up
#### If the value is too large, move the right pointer down
# If you never find the value , return -1




def BinarySearch(arr,target):
    mid = len(arr)//2
    left = arr[0]
    right = arr[-1]
    
    def searchfrmleft(arr,left,mid,target):

        index = 0
        for i in arr[left:mid]:
            if i == target:
                return index
            index+=1
        return -1

    def searchfrmright(arr,mid,right,target):
        index = mid + 1
    
        for i in arr[mid:right]:
            if i == target:
                return index-1
            index+=1    
        return -1


    index  = searchfrmleft(arr,mid,left,target)
    if index !=-1:
        return index
        
    
    

    index2 = searchfrmright(arr,mid,right,target)
    if index2 != -1:
        return index2


print(BinarySearch([1,2,3,4,5,6,7,8,9,10],6))


    
