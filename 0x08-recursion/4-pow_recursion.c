#include "main.h"

/**
 * _pow_recursion - prints
 * @x: base
 * @y: power
 *
 * Return: nothing
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, y - 1));
}
