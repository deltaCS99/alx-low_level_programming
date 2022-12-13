#include "main.h"

/**
 * print_alphabet_x10 - print alphabet_x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 9)
	{
		print_alphabet();
		i++;
	}

}
/**
 * print_alphabet - print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
