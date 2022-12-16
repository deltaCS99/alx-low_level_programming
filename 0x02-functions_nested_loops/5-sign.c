#include "main.h"

/**
 * print_sign - check sign
 * @n: number
 *
 * Return: 1 if positive, 0 if zero or -1 if less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}


	_putchar('0');
	return (0);

}
