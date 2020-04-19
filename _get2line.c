#include "shell.h"
#include <string.h>

void _get2line(Data_t *data)
{
	int c;
	int index = 0;
	int bufferSize = BUFFER_SIZE;
	data->line = _alloc_ptr(bufferSize, data);
	while (1)
	{
		/*Read each character*/
		c = _getchar(data);

		/*If we hit EOF, replace it with a null character and return*/
		if (c == EOF || c == '\n')
		{
			data->line[index] = '\n';
			break;
		}
		else
			data->line[index] = c;
		index++;
	}

	if (strcmp(data->line, "exit") == 0)
	{
		data->status = 0;
	}
}