#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 upon success
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
