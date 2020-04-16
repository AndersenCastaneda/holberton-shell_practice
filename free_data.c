#include "header.h"

/**
 * free_line - free's struct data->line from memory
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
 * Return: Nothing
 */
void free_cleanline(Data_t *data)
{
	/*If args exits can free's from memory*/
	if (data->cleanline)
		free(data->cleanline);
}

/**
 * free_line - free's struct data->args from memory
 * Return: Nothing
 */
void free_args(Data_t *data)
{
	/*
	int i;
	If args exits can free's from memory
	for (i = 0; data->args[i]; i++)
		free(data->args[i]);
	*/
	free(data->args);
}
