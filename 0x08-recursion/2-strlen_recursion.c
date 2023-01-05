#include "main.h"

/**
 * _strlen_recursion - prints
 * @s: string
 *
 * Return: nothing
 **/
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return (0);
	}

	return (i);
}
