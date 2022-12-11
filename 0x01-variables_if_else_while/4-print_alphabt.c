#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 upon success
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);

		}
	}

	putchar('\n');

	return (0);
}
