#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: diagonal length
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
