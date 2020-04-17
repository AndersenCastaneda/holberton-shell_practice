#include "shell.h"

/**
 * _alloc_ptr - Allocates memory for a pointer
 * @length: Size memory
 * @data: void (just for now)
 * Return: Pointer to the memory or NULL
 */
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

/**
 * _alloc_dblptr - Allocates memory for a double pointer
 * @length: Size memory
 * @data: void (just for now)
 * Return: Pointer to the memory or NULL
 */
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
