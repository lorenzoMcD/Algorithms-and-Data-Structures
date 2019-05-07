## write function which accepts a number and returns the factorial of that number
## a factorial is the product of an integer and all the integers below it.



def factorial(num):

    if (num == 0):
        return 1
    return num * factorial(num-1)

print(factorial(1))
print(factorial(2))
print(factorial(4))
print(factorial(7))
