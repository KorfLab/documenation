# Align

## Reversing a string 

`char *rev(const char *seq)`

Where `const char *seq` is the string to be reversed.
Returns the reversed string.

## Alignment
`swalign align(dpmatrix mat, int M, int N, int G)`

Where dpmatrix is a matrix containing both the score and trace.
M is the match score. 
N is the mismatch score.
G is the gap score. 

Currently returns nothing (prints aligned strings).
Will be updated to return struct swalign.