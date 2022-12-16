#include <stdio.h>

/**
 * main - Entry point of program
 * Return: 0 upon success
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		putchar(*str);
		str++;
	}

	putchar('\n');

	return (0);
}
