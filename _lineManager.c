#include "header.h"

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
		free_line(data), free(data), exit(EXIT_FAILURE);
}

/**
 * _clean_line - Cleans a line from mewline, tabs, etc
 * @data: Source (data->line) to clean
 * Return: Nothing
 */
void _clean_line(Data_t *data)
{
	int i, j = 0, flag = 0, count = 0;
	char c[BUFFER_SIZE];

	data->cleanline = NULL;
	for (i = 0; data->line[i]; i++)
	{
		/*If found a quote and there is no flag, call flag*/
		if (flag == 0 && data->line[i] == '\"')
		{
			flag = 1;
			continue;
		}
		/*If found a quote and there is a flag, reset flag*/
		else if (flag == 1 && data->line[i] == '\"')
		{
			flag = 0;
			continue;
		}
		/*********************************************************/




		if (data->line[i] == '/' && c[j - 1] && c[j - 1] == '/')
			continue;


		/*If there is no flag, found a space, and c[j - 1]*/
		/*does not have a space, copy the space*/
		printf("FLAG= %i\n", flag);
		printf("J > 0\n");
		if (flag == 1 && data->line[i] == ' ' && (c[j - 1] != ' ' && c[j - 1]))
		{
			printf("ENTRO IF ' '\n");
			c[j] = data->line[i];
			j++;
			count++;
		}

		/*If there is a flag or if is any char, copy the char*/
		if (flag == 1 || (data->line[i] != ' ' && data->line[i] != '\n'))
		{
			c[j] = data->line[i];
			j++;
			count++;
		}
	}
	c[j] = '\0';
	_copyline(data, c, count);
}

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
	data->cleanline = alloc_ptr(len + 1);
	for (i = 0; c[i]; i++)
		/*Copy string from c to *cleanline*/
		data->cleanline[i] = c[i];

	/*End string with NULL value*/
	data->cleanline[i] = '\0';
}
