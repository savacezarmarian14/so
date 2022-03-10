/**
 * SO
 * Lab #2, Simple I/O operations
 *
 * Useful structures/macros
 */
#ifndef LIN_UTILS_H_
#define LIN_UTILS_H_ 1

#include <stdio.h>
#include <stdlib.h>

/* Useful macro for handling error codes */
#define DIE(assertion, call_description)					\
	do {									\
		if (assertion) {						\
			fprintf(stderr, "(%s, %s, %d): ",			\
					__FILE__, __FUNCTION__, __LINE__);	\
			perror(call_description);			\
			exit(EXIT_FAILURE);					\
		}								\
	} while (0)

#endif
