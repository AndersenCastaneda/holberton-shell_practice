#include "shell.h"

/**
 * main - Programm entry point
 * @argc: argument count
 * @argv: argument vector
 * @environ: enviroment variable
 * Return: 0
 */
int main(int argc, char **argv, char **environ)
{
	Data_t *data = malloc(sizeof(Data_t));
	(void)argc;
	(void)environ;

	if (argv[1])
		data->args = argv;

	data->status = 1;

	/*Load any configuration settings file if exist*/
	/*===>>> data->dirpath = _getpath(environ);*/

	/*Read Evaluate Print Loop (REPL)*/
	_main_loop(data);

	/*Perform any shutdown cleanup if is necessary*/
	free(data);

	return (EXIT_SUCCESS);
}
