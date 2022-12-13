#include "main.h"

/**
 * main - Entry point of program
 * Return: 0 upon success
 */
int main(void)
{
	print_alphabet();

	return (0);
}


/**
 * print_alphabet - print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	for (char c = 'a'; c < 'z' ; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return;
}
