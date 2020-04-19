#include "shell.h"

/**
 * _noSpcTabNLine - Check if a char is not ' ', '\t', '\n'
 * @data: data->line char to compare.Struct data container
 * @index: position in the string
 * Return: 1 if are different, = Otherwise
 */
int _isNotSpcTabNLine(Data_t *data, int index)
{
	if (data->line[index] != ' ' &&
		data->line[index] != '\t' &&
		data->line[index] != '\n')
		return (1);
	else
		return (0);
}
