/**
 * _memset -  fills the first n bytes of the memory
 * @s: char pointer
 * @b: byte to fill
 * @n: first n bytes to fill
 *
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
