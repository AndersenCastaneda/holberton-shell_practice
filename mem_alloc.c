#include "header.h"

char *_alloc_ptr(int length, Data_t *data)
{
	char *ptr = malloc(sizeof(char) * length);

	/*If malloc fails, print error and exit*/
	if (!ptr)
	{
		free_line(data);
		free(data);
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	/*If there is no error, return the pointer*/
	return (ptr);
}

char **_alloc_dblptr(int length, Data_t *data)
{
	char **ptr = malloc(sizeof(char *) * length);

	/*If malloc fails, print error and exit*/
	if (!ptr)
	{
		free_line(data);
		free_cleanline(data);
		free_args(data);
		free(data);
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	/*If there is no error, return the pointer*/
	return (ptr);
}
