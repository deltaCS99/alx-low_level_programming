#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	char *c = &s[len - 1];

	while (*c != '\0')
	{
		_putchar(*c);
		c--;
	}
	_putchar('\n');
}
