# Naive String Search

# define fuction that takes two strings largerstring , and pattern to search
# loop over the long string
# loop over the shorter string
# if char dont match , break out of the inner loop
# if the char do match , keep going
# if you complete the inner loop and find a match
# increment the count of matches
# return the count




def StringSearch(stringlong, patt):
    count = 0
   

    for a in stringlong:

        for b in patt:
            if ( b == a):
                 count+=1
            break
            
    if count > 0:
        return count
    else:
        return -1

print(StringSearch('lorenzo dog zog','zo'))
