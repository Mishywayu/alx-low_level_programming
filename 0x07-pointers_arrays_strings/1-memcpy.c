#include "main.h"
/**
 * char *_memcpy - used to copy bytes from memory area
 *
 * @dest: destination.
 *
 * @src: source.
 *
 * @n: number of bytes.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			dest[x] = src[x];
		}
	}
	return (dest);
}
