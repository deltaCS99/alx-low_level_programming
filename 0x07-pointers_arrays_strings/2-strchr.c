#include <string.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return:  first occurance of char c or null
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
