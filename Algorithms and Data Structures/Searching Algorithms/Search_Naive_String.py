
# code taken from https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/







def Search(txt,pat): # function takes in long string , and pattern to search for
    m = len(pat) # will len both strings
    n = len(txt)


    # A loop to slide pat[] one by one
    for i in range(n - m + 1):
        j = 0

        # for current index i, check
        # for pattern match
        for j in range(0, m):
            if (txt[i + j] != pat[j]):
                break

        if ( j == m-1):
            print("Pattern found at index", i)


print(Search('lorie loled','lo'))
        
