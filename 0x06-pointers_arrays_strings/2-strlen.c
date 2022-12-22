#include "main.h"

/**
 * _strlen - check the code
 * @s: string
 * Return: string length.
 */
int _strlen(char *s)
{
	int i;
	char *c = s;

	i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}

	return (i);
}
