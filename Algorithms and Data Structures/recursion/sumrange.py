
## Recursion example



def sumrange(num):  # create a function that takes in number
    if(num == 1 ): 
        return 1; # if number is equal to 1 then function will return 1
    return num + sumrange(num-1) # if function is not equal to 1 then function
                                # add initial num to the orginal function minus 1
                                # program will continue to call itself recursively
                                # until the number 1 is returned then the function
                                # will add up and display total number of return values





print(sumrange(4))
