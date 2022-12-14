#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: number
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;

	_putchar(k + '0');
	return (k);
}
