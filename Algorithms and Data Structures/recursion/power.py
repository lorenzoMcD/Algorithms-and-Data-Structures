# power
# write a fucntion whichh accepts  base and an exponent. Function should return
# the power of the base to the exponent

##Examples
# power(2,0) // 1(bas
# power(2,2) // 4
# power(2,4) // 16

def power(base,exp):

   # return(base**(exp))
    if ( exp == 0):
        return 1
    return base * power(base,exp-1)





print(power(2,0))
print(power(2,2))
print(power(2,4))



