# Longest-common-substring
Longest common substring (LCS) of a string in non contiguous case by removing multiple adjacent characters.
Also prints all possible substring


### Sample Input:
Size of each array:

8

6

Array 1 values: 

1 2 3 4 7 5 8 9

Array 2 values: 

1 2 4 5 7 8

### Sample Output:
Length of LCS: 5

Possible values: 

1 2 4 7 8 

1 2 4 5 8 

### Calculations:
As usual construct Dynamic programing table with the 2 set of arrays.
* Assign new values in the table by  
* * adding 1 to the diagonal if both character of the array match, else 
* * choose the maximum of the adjacent (left | top) element

The entry at the N x M of the DP table will give the length of the longest common substring.
