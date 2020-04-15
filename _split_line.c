#include "header.h"

char **lsh_split_line(char *line)
{
	int bufferSize = LSH_TOK_BUFSIZE, index = 0;
	char **tokens = malloc(sizeof(char *) * bufferSize);
	char *token;

	if (!tokens)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, LSH_TOK_DELIM);
	while (token != NULL)
	{
		tokens[index] = token;
		index++;

		if (index >= bufferSize)
		{
			bufferSize += LSH_TOK_BUFSIZE;
			tokens = realloc(tokens, bufferSize * sizeof(char *));
			if (!tokens)
			{
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}

		token = strtok(NULL, LSH_TOK_DELIM);
	}
	tokens[index] = NULL;
	return tokens;
}
