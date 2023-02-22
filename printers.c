#include "shell.h"
/**
 *  _putchar - prints a character to the stdout
 *  @c: the character given by user
 *  Return: 1 on success, else -1
 */
int _putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
/**
 * print - prints a string to the stdout
 * @str: string given
 * Return: string
 */
int print(char *str)
{
	int n_bytes = _strlen(str);

	return (write(STDOUT_FILENO, str, n_bytes));
}
