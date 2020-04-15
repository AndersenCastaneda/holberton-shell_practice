#include "header.h"

/**
 * _print_promt - print $ simbol in the command prompt
 * Return: Nothing
 */
void _print_promt(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		if (write(0, "$ ", 2) < 0)
			exit(0);
	}
}
