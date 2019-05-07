## write a recursive function called fib which accepts a number and returns
# the nth number in the fib sequence.

# Ex.
# fib(4) // 3
# fib(10) // 55
# fib(28) // 317811
# fib(35) // 9227465


def fib(num):
    
    if (num <= 2):
        return 1

    return fib(num-1) + fib(num-2)
            
    


print(fib(4))
print(fib(10))
print(fib(28))
print(fib(35))
