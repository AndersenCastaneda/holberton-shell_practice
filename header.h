#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

typedef struct Data
{
	char *line;
	char *cleanline;
	char **args;
	char *dirpath;
	int status;
} Data_t;

void _print_promt(void);

int _getchar(Data_t *data);
void _getline(Data_t *data);
void _clean_line(Data_t *data);
void _copyline(Data_t *data, char c[], int len);

int _strcmp(char *s1, char *s2);
int _isCharToSkip(Data_t *data, int index);

char *_alloc_ptr(int length);

void main_loop(Data_t *data);
char **lsh_split_line(char *line);

void free_line(Data_t *data);
void free_args(Data_t *data);
void free_cleanline(Data_t *data);

void _exit_call(void);

/*Extras*/
int _noSpcTabNLine(Data_t *data, int index);

#endif
