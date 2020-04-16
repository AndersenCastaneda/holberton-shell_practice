#include "header.h"

/**
 * main_loop - Read Evaluate Print Loop (REPL)
 * Return: Nothing
 */
void main_loop(Data_t *data)
{
	int cmdCount = 0;

	do {
		/*Print $*/
		_print_promt();

		/*Read the line*/
		_getline(data);
		_clean_line(data);

		cmdCount++;
		printf("./hsh: %i: %s", cmdCount, data->line);
		printf("Clean: %i: %s\n", cmdCount, data->cleanline);

		/*Split the line*/
		_splitline(data);

		/*Evalute if command can execute*/

		/*Execute the command*/
		/*data->status = lsh_execute(args);*/

		free_line(data);
		free_cleanline(data);
		free_args(data);
	} while (data->status);
}
