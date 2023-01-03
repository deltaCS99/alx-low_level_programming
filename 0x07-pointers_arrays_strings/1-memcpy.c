/**
 * _memcpy -  fills the first n bytes of the memory
 * @dest: destination
 * @src: source
 * @n: first n bytes to fill
 *
 * Return:  pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
