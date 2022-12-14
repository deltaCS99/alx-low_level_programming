#include "main.h"

/**
 * print_last_digit - Print last digit
 * @n: number
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10 +'0');
	return (n % 10);
}
