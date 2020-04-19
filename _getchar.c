#include "shell.h"

/**
 * _getchar - Get the a char input from the standard input
 * Return: Character read on Success, otherwise 0
 */
int _getchar(Data_t *data)
{
	char c;
	int byte_read;

	/*Get the char from de std in and save it in c variable*/
	byte_read = read(STDIN_FILENO, &c, 1);

	/*If hit the end, return -1*/
	if (byte_read == EOF)
		return (EOF);

	/*If there is no error, return the character read*/
	return (c);
}
