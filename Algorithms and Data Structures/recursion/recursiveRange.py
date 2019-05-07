## write a function called recursiveRange which accepts a number and adds
## up all the numbers from 0 to the number passed to the function


# Ex..
# recursiveRange(6) // 21
# recursiveRange(10) // 55

def recursiveRange(num):
    if (num == 0) : ## will return zero if num equal to zero
        return 0

    return num + recursiveRange(num-1)



print(recursiveRange(6))
print(recursiveRange(10))
