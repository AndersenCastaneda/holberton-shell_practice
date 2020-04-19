#include "shell.h"

/**
 * free_line - free's struct data->line from memory
 * @data: data->line pointer to free's
 * Return: Nothing
 */
void free_line(Data_t *data)
{
	/*If line exits can free's from memory*/
	if (data->line)
		free(data->line);
}

/**
 * free_cleanline - free's struct data->cleanline from memory
 * @data: data->cleanline pointer to free's
 * Return: Nothing
 */
void free_cleanline(Data_t *data)
{
	/*If args exits can free's from memory*/
	if (data->cleanline)
		free(data->cleanline);
}

/**
 * free_args - free's struct data->args from memory
 * @data: data->args pointer to free's
 * Return: Nothing
 */
void free_args(Data_t *data)
{
	free(data->args);
}
