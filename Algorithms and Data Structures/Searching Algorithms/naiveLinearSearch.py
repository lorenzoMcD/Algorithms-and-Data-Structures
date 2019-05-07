## naive Linear Search implementation
# write function that accepts an array and value
# loop through the array and check if the current
# array element is wqual to the value
# If it is , return the index at which the element
# is found
# If the value is never found, return -1




def LinearSearch(arr,target):

    i = 0
    for item in arr:
        
        if (item == target):
            return i
        i+=1
    return -1


print(LinearSearch([1,2,3,4,5,6,7],5))
    
