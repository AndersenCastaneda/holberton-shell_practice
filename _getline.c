#include "shell.h"

/**
 * _getline - Read line from standard input
 * @data: Struct data container
 * Return: Nothing
 */
void _getline(Data_t *data)
{
	size_t len = 0;
	ssize_t bytes;

	data->line = NULL;
	/*Read the line from the standard input*/
	bytes = getline(&data->line, &len, stdin);

	/*If Read fails, free's memory and exit (1)*/
	if (bytes == EOF)
		_free_line(data), free(data), exit(EXIT_FAILURE);
}
