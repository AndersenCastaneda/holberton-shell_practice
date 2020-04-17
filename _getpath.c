#include "shell.h"

/**
* _get_path - Gets the path
* @environ: pointer that locate a character.
* Return: pointer.
*/
char *_get_path(char **environ)
{
	int i, j;
	char strpath[] = "PATH=";
	char buffer[1024], *extra = buffer;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; environ[i][j] && j < 5; j++)
		{
			if (environ[i][j] != strpath[j])
				break;
			if (j == 4)
				extra = environ[i];
		}
	}
	while (*extra != '\0')
	{
		if (*extra == '=')
		{
			extra++;
			break;
		}
		extra++;
	}
	return (extra);
}
