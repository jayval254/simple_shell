#include "shell.h"
/**
 * function_strtok - function strtok
 * @buffer: pointer at buffer
 * @pointer: pointer
 * Return: command
 */
char **function_strtok(char *buffer, int pointer)
{
	char **command;
	size_t i;
	char *tok;
	char *delim = " \n\t";

	command = malloc(sizeof(char *) * pointer);
	if (command == NULL)
	{
		free(buffer);
		return (NULL);
	}
	tok = strtok(buffer, delim);
	i=0;
	while (tok)
	{
		command[i] = tok;
		tok = strtok(NULL, delim);
		i++;
	}
	command[i] = NULL;
	return (command);
}

/**
 * _memory - memory
 * @buffer: buffer
 * Return: count
 */
int _memory(char *buffer)
{
	int i, count = 2;
	char *delim = " ";

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == delim[0])
			count++;
	}
	return (count);
}

/**
 * _memory1 - memory buffer
 * @buffer: buffer
 * Return: int
 */
int _memory1(char *buffer)
{
	int i, count = 2;
	char *delim = ":";

	for (i = 0; buffer[i] != '\0'; i++)
	{
		if (buffer[i] == delim[0])
			count++;
	}
	return (count);
}