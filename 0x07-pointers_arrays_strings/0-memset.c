#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to space.
 *
 * @b: constant value.
 *
 * @n: number of bytes to fill.
 *
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			s[x] = b;
		}
	}
	return (s);
}
