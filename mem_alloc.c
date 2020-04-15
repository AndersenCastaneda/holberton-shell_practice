#include "header.h"

char *alloc_ptr(int length)
{
	char *ptr = malloc(sizeof(char) * length);

	/*If malloc fails, print error and exit*/
	if (!ptr)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	/*If there is no error, return the pointer*/
	return (ptr);
}
