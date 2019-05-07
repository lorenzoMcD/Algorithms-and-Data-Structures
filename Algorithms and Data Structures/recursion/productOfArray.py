# product of Array
# write a function that takes in a array of numbers and returns the product
# of them all

# Ex
# productofarray([1,2,3]) // 6
# productofarray([1,2,3,10]) // 6


def productOfArray(arr):
    if len(arr) == 0: # checks if array is empty if empty return nothing 
        return

    total = 1
    
    for num in arr:
        total = total*num
        
    return(total)


print(productOfArray([1,2,3]))
print(productOfArray([1,2,3,10]))
