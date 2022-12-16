#include "main.h"

/**
 * _isupper - Determine if is upper
 * @c: character
 * Return: 0 upon success
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);

}
