#include "shell.h"
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: array of string
 * Return: Pointer of a string copied
 */
char *_strdup(char *str)
{
	int i, j;
	char *string;

	if (str == NULL)
		return (0);
	i = 0;
	while (*(str + i) != '\0')
		i++;
	string = malloc(i + 1);
	if (string == 0)
		return (0);
	for (j = 0; j < i; j++)
		*(string + j) = *(str + j);
	return (string);
}

/**
 * _mystrcat - FUnction will concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated string
 */
char *_mystrcat(char *dest, char *src)
{
	int i = 0, c = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[c] != '\0')
	{
		c++;
	}
	while (n <= c)
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	return (dest);
}

/**
 *  _mystrlen - return the length of a string
 *  @s: character to print
 *  Return: length of string
 */
int _mystrlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcmp - String compare
 * @s1: String One
 * @s2: string two
 * Return: comparison of two strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/**
 *  _mystrcpy - copy a string
 *  @dest: destination 
 *  @src: source string
 *  Return: the string copied
 */
char *_mystrcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
