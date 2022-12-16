#include "main.h"

/**
 * _islower - check lowercase
 * @c: character
 *
 * Return: 1 if lower, 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
