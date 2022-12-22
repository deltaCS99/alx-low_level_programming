#include "main.h"

/**
 * reverse_array - check the code
 *
 * @a: string
 * @n: n
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int t;
	int i;

	for (i = 0; i < n/2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
