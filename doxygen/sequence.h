/******************************************************************************\
 sequence.h
 Copyright (C) Ian Korf
\******************************************************************************/

#ifndef GENOMIKON_SEQUENCE_H
#define GENOMIKON_SEQUENCE_H

#include "model.h"
#include "toolbox.h"

// Utilities
int    gkn_ntindex(const char *, int, int);
char * gkn_revcomp(const char*);

//! struct contains the sequence length, sequence name, and the sequence as a string
struct gkn_FASTA {
	//! sequence length
	int    length;
	//! sequence name
	char * def;
	//! nucleotide sequence
	char * seq; 
};
typedef struct gkn_FASTA * gkn_fasta;

//! free the memory of gkn_fasta 
void	  gkn_fasta_free(gkn_fasta);
//! create a new gkn_fasta with parameter(sequence name, sequence itself)
gkn_fasta gkn_fasta_new(const char *, const char *);
//! read the gkn_pipe and construct a gkn_fasta
gkn_fasta gkn_fasta_read(gkn_pipe);
void	  gkn_fasta_write(FILE *, const gkn_fasta);
void	  gkn_fasta_set_line_length(int);

#endif
