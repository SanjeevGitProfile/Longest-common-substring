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
  * adding 1 to the diagonal if both character of the array match, else 
  * choose the maximum of the adjacent (left | top) element

The entry at the N x M of the DP table will give the length of the longest common substring.

The dynamic programing table for the sample input will look like,

|  DP |  0  |  1  |  2  |  3  |  4  |  7  |  5  |  8  |  9  |
|-----|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|**0**|  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
|**1**|  0  |  1  |  1  |  1  |  1  |  1  |  1  |  1  |  1  |
|**2**|  0  |  1  |  2  |  2  |  2  |  2  |  2  |  2  |  2  |
|**4**|  0  |  1  |  2  |  2  |  3  |  3  |  3  |  3  |  3  |
|**5**|  0  |  1  |  2  |  2  |  3  |  3  |  4  |  4  |  4  |
|**7**|  0  |  1  |  2  |  2  |  3  |  4  |  4  |  4  |  4  |
|**8**|  0  |  1  |  2  |  2  |  3  |  4  |  4  |  5  |  5  |

The fuction *printallLCS()* will print all possible subsequence using the dp table in the same logic we derived the values in the table.

* Start traversing from the cell[n][m] of the DP table
  * Move to its left upper diagonal cell if the elemets corresponding to the cell are same
  * Else choose the cell which has the greater value (either left or top cell) 
   * if both values are equal then traverse both sides one by one recursively
   
 The travelsal will look like as below:
 
