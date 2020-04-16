#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>/*Quitar cuando tenga mi split funcionando*/

#define BUFFER_SIZE 1024
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

typedef struct Data
{
	char *line;
	char *cleanline;
	char *dirpath;
	int status;
	char **args;
	int nul;
	int words;
} Data_t;

void main_loop(Data_t *data);

void _print_promt(void);

int _getchar(Data_t *data);
void _getline(Data_t *data);
void _clean_line(Data_t *data);
void _copyline(Data_t *data, char c[], int len);
void _splitline(Data_t *data);

char *_alloc_ptr(int length, Data_t *data);
char **_alloc_dblptr(int length, Data_t *data);

void free_line(Data_t *data);
void free_args(Data_t *data);
void free_cleanline(Data_t *data);

void _exit_call(void);

int _strcmp(char *s1, char *s2);

/*Extras*/
int _noSpcTabNLine(Data_t *data, int index);
int _charcount(Data_t *data, int index);
void _wordcount(Data_t *data);

#endif
