# recursion example

## create a recursive factorial function




def factorial(num):  ## this is an example of non recursive way to write function
    total = 1       # function takes in num, variable i is equal to num                   #
    i = num         
    while(i > 1):   # while i is less greater than 1 ( dont want to go to 0 ) 
        total *=i   # total mulitplied by i value, then i value is subtracted       
        i-=1        # to iterate to the next factorial next number
    return total    # will return the total variable 


print(factorial(3))





# recursive example 
# note the return call is used to stop the recursion
def rfactorial(num):
    if(num == 1):  
        return 1
    return num * factorial(num - 1)

print(rfactorial(3))
