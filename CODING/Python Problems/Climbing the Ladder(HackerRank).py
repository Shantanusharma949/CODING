                                                           #COUNTER
#1) The list has elements x , y and z.When you use Counter on this list , it will count how many times x , y and z is present.
# 2)Once the dictionary is given to the Counter, it will be converted to a hashtable objects wherein the elements will become keys, and the values will be 
# the count of the elements from the dictionary given.
# For example : {‘x’: 4, ‘y’: 2, ‘z’: 2, ‘z’: 2}. The Counter function will try to find the count of each of the key in the given dictionary.
                                                           #BISECT
# 1. bisect(list, num, beg, end) :- This function returns the position in the sorted list, where the number passed in argument can be placed so as to maintain the resultant list in sorted order. If the element is already present in the list, the right most position where element has to be inserted is returned. This function takes 4 arguments, list which has to be worked with, number to insert, starting position in list to consider, ending position which has to be considered.

# 2. bisect_left(list, num, beg, end) :- This function returns the position in the sorted list, where the number passed in argument can be placed so as to maintain the resultant list in sorted order. If the element is already present in the list, the left most position where element has to be inserted is returned. This function takes 4 arguments, list which has to be worked with, number to insert, starting position in list to consider, ending position which has to be considered.

# 3. bisect_right(list, num, beg, end) :- This function works similar to the “bisect()” and mentioned above.

#!/bin/python3

import sys
from collections import Counter#returns dictionary with count of each iteam(Key) as its value 
from bisect import bisect_left#it return the position of the element to be inserted in a sorted array, to  maintain the sorted array

n = int(input().strip())
scores = [int(scores_temp) for scores_temp in input().strip().split(' ')]
m = int(input().strip())
alice = [int(alice_temp) for alice_temp in input().strip().split(' ')]
# your code goes here

counts = Counter(scores)
counts = sorted(counts)
n = len(counts)
for a in alice:
    i = bisect_left(counts, a)
    if i < n and counts[i]==a:
        print(n - i)
    else:
        print(n+1-i)