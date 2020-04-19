#include "shell.h"

/**
 * _wordcount - Counts words in a string
 * @data: data->cleanline string to check
 * Return: Number of words
 */
void _wordcount(Data_t *data)
{
	int i = 0, size = 0, count = 0;

	/*Loop through the clean line*/
	while (data->cleanline[i])
	{
		/*Get size for each sub pointer*/
		size = _charcount(data, i);
		count++;
		/*If the position dont reach the end*/
		if (data->nul == 0)
			i += size;
		else
			break;
	}
	data->nul = 0;
}
