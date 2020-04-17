#include "shell.h"

/**
 * _copyline - Copy bytes from an array to a string
 * @data: Destination. Struct data container
 * @c: Source. Array
 * @len: Pointer's size. data->cleanline
 * Return: Nothing
 */
void _copyline(Data_t *data, char c[], int len)
{
	int i;

	/*Allocates memory for *cleanline*/
	data->cleanline = _alloc_ptr((len + 1), data);
	for (i = 0; c[i]; i++)
		/*Copy string from c to *cleanline*/
		data->cleanline[i] = c[i];

	/*End string with NULL value*/
	data->cleanline[i] = '\0';
}
