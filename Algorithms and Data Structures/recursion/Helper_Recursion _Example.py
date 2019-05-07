## helper function example


## write a function that takes in a list of values and returns odd values

def collectOddValues(arr):
    z=1
    results = []
    def helper(helperInput):
        if(len(helperInput) == 0):
            return

        if(helperInput[0] % 2 !=0):
            results.append(helperInput[0])
           
        z+=1
        arr[z::]
        helper(helperInput)

    helper(arr)

    return result



collectOddValues([1,2,3,4,5,6,7,8,9])
