#include "main.h"

/**
 * _puts_recursion - prints
 * @s: string
 *
 * Return: nothing
 **/
void _puts_recursion(char *s)
{
	if (*s != '\n')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

	_putchar('\n');
}
