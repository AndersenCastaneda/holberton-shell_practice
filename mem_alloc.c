#include "header.h"

char *_alloc_ptr(int length, Data_t *data)
{
	char *ptr = malloc(sizeof(char) * length);
	(void)data;
	/*If malloc fails, print error and exit*/
	if (!ptr)
	{
		fprintf(stderr, "allocation error: \n");
		return (NULL);
	}

	/*If there is no error, return the pointer*/
	return (ptr);
}

char **_alloc_dblptr(int length, Data_t *data)
{
	char **ptr = malloc(sizeof(char *) * length);
	(void)data;
	/*If malloc fails, print error and exit*/
	if (!ptr)
	{
		fprintf(stderr, "allocation error: \n");
		return (NULL);
	}

	/*If there is no error, return the pointer*/
	return (ptr);
}
