# Dynamic Programming Matrix

## dpmatrix struct
A struct containing the two strings, string length, and scoring and traceback matrices.

## Creating a dpmatrix given fasta files
`dpmatrix new_dpmatrix(const gkn_fasta ffa, const gkn_fasta ffb)`
Where ffa and ffb are two gkn_fastas containing the two strings to be aligned.
Returns dpmatrix.

## Creating a blank dpmatrix
`dpmatrix new_blank(void)`
Both string lengths are set to 0.
Strings, scoring matrix, and traceback matrix = NULL
Returns blank dpmatrix.

## Freeing a dpmatrix
`void free_dpmatrix(dpmatrix matrix)`
Frees the two malloc'd strings.
Frees the scoring and traceback matrices.
Returns nothing.