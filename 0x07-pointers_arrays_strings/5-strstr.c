#include <string.h>

/**
 * _strstr -  gets the length of a prefix substring
 * @haystack: string
 * @needle: string
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
