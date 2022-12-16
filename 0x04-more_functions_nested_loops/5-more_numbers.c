#include "main.h"

/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i;
	int c;

	i = 0;

	while (i < 9)
	{
		for (r = 0; r <= 14; r++)
		{
			if (i > 9)
			{
				putchar('1');
			}

			putchar((i % 10) + '0');
		}
	}
}
