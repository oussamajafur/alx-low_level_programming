#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @j: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *j)
{
	if (*j == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(j + 1));
}
