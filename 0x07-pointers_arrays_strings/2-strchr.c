/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: character
 *
 * Return:  first occurance of char c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
