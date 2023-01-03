/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return:  first occurance of char c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
