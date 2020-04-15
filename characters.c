#include "header.h"

/**
 * _sglQuote - Check if a character is a single quote
 * @data: Struct data container
 * @index: position to check on data->line
 * Return: 1 if are equals Otherwise 0
 */
void _sglQuote(Data_t *data, int index, int *sgl)
{
	if (data->line[index] == '\'')
		*sgl = 1;
	else
		*sgl = 0;
}

/**
 * _dblQuote - Check if a character is a double quote
 * @data: Struct data container
 * @index: position to check on data->line
 * Return: 1 if are equals Otherwise 0
 */
void _dblQuote(Data_t *data, int index, int *dbl)
{
	if (data->line[index] == '\"')
		*dbl = 1;
	else
		*dbl = 0;
}

/**
 * _isCharToSkip - Check if a character is a '\t', '\n',
 * '\"', '\''
 * @data: Struct data container
 * @index: position to check on data->line
 * Return: 1 if are equals Otherwise 0
 */
int _isCharToSkip(Data_t *data, int index)
{
	if (data->line[index] == '\t' || data->line[index] == '\n' ||
		data->line[index] == ' '  || data->line[index] == '\\')
		return (1);
	else
		return (0);
}
