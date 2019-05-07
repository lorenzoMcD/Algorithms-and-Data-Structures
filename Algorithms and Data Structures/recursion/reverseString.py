# write a recursive function called reverse which accepts a string and returns
# a new string in reverse


# ex.
# reverse(' awesome') // 'emosewa'
# reverse('rithmschool') // 'loohcsmhtir'


def reverse(someString):
    
    if len(someString) < 1 :
        return(someString)
    
    temp = someString[0] 
    reverse(someString[1:]) 
    print(temp, end='') 



reverse('awesome')
