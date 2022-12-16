#include "main.h"

/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i;
	int r;

	i = 0;

	while (i < 9)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r > 9)
			{
				_putchar('1');
			}

			_putchar((r % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
