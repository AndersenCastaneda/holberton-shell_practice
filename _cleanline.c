#include "header.h"

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
		/*Open Quote flag*/
		if (flag == 0 && data->line[i] == '\"')
			flag = 1;
		/*Close quote flag*/
		else if (flag == 1 && data->line[i] == '\"')
			flag = 0;

		/*Copy everything you find if is inside a quote (") or*/
		/*if the char is different from ' ', '\t' '\n'*/
		if (flag == 1 || _noSpcTabNLine(data, i))
		{
			c[j] = data->line[i];
			j++;
			count++;
		}
		else
		{
			/*If find many '\t' or ' ' */
			if ((data->line[i] == '\t' || data->line[i] == ' ') &&
				(c[j - 1] && c[j - 1] != ' '))
			{
				c[j] = ' ';
				j++;
				count++;
			}
		}
	}
	c[j] = '\0';
	_copyline(data, c, count);
}
