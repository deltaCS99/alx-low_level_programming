#include "main.h"

/**
 * _abs - absolute value
 * @n: number
 *
 * Return: 1 if positive, 0 if zero or -1 if less than zero
 */
int print_sign(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}

	return (0);

}
