#include "shell.h"

/**
 * _splitline - Splits a string in words
 * @data: data->cleanline string to split. Struct pointer
 * Return: Nothing
 */
void _splitline(Data_t *data)
{
	int i = 0, j = 0, k = 0, l = 0, size = 0;
	char copy[1024];

	data->args = NULL;
	data->nul = 0;
	data->words = 0;

	/*Save the legth of the pointer args*/
	_wordcount(data);
	printf("Largo: %i\n", data->words);

	/*Allocate args whit the specific length*/
	data->args = _alloc_dblptr(data->words, data);
	/*Loop through the clean line*/
	while (data->cleanline[i])
	{
		/*Get size for each sub pointer*/
		size = _charcount(data, i);
		/*Loop para copiar la info*/
		for (k = 0 ; k < size - 1; k++, l++)
			copy[k] = data->cleanline[l];
		copy[k] = '\0';

		printf("word[%i]: %s\n", j, copy);
		data->args[j] = copy;
		j++;

		/*If the position dont reach the end*/
		if (data->nul == 0)
		{
			i += size;
			l = i;
		}
		else
			break;
	}
}
