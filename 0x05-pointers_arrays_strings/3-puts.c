#include "main.h"

/**
 * _puts - check the code
 *
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char *c = str;

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}

	_putchar('\n');
}
