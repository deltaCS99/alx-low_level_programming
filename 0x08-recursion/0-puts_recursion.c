/**
 * _puts_recursion - prints
 * @s: string
 *
 * Return: nothing
 **/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
