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

/**
 * _charcount - Count characters in a word
 * @data: data->cleanline string to check
 * @index: position to start to count
 * Return: Number of characters
 */
int _charcount(Data_t *data, int index)
{
	int len = 0, flag = 0;

	/*Loop through the clean line*/
	for ( ; data->cleanline[index]; index++)
	{
		/*If found the separator*/
		if (flag == 0 && data->cleanline[index] == ' ')
			break;

		/*Open Quote flag*/
		if (flag == 0 && data->cleanline[index] == '\"')
			flag = 1;
		/*Close quote flag*/
		else if (flag == 1 && data->cleanline[index] == '\"')
			flag = 0;

		/*If char is not a ' ' or if char is a space inside a quots*/
		if (data->cleanline[index] != ' ' ||
			(data->cleanline[index] == ' ' && flag == 1))
			len++;
	}

	data->words++;
	/*If index is on final position in the string, flag null*/
	if (data->cleanline[index] == '\0')
		data->nul = 1;

	/*return len + nul*/
	return (len + 1);
}

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
