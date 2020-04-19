#include "shell.h"

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
