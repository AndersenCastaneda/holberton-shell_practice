#include "shell.h"

/**
 * main_loop - Read Evaluate Print Loop (REPL)
 * @data: Data_t Struct Pointer
 * Return: Nothing
 */
void _main_loop(Data_t *data)
{
	int cmdCount = 0;

	do {
		/*Print $*/
		_print_promt();

		/*Read the line*/
		_getline(data);

		/*Clean spaces and tabs*/
		_clean_line(data);

		cmdCount++;
		printf("./hsh: %i: %s", cmdCount, data->line);
		printf("Clean: %i: %s\n", cmdCount, data->cleanline);

		/*Split the line*/
		_splitline(data);

		/*argv[0] / miro si esta alguina carpeta*/
		/*Evalute if command can execute*/

		/*Execute the command*/
		/*_execute(data);*/
		_free_line(data);
		_free_cleanline(data);
		_free_args(data);
	} while (data->status);
}
