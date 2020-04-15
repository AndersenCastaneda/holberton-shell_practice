#include "header.h"

/**
* _get_path - Gets the path
* @environ: pointer that locate a character.
* Return: pointer.
*/
char *_get_path(char **environ)
{
	int w, x;
	char strpath[] = "PATH=";
	char buffer[1024], *extra = buffer;

	for (w = 0; environ[w]; w++)
	{
		for (x = 0; environ[w][x] && x < 5; x++)
		{
			if (environ[w][x] != strpath[x])
				break;
			if (x == 4)
				extra = environ[w];
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
