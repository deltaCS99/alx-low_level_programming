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
				putchar('1');
			}

			putchar((r % 10) + '0');
		}

		i++;
	}
}
