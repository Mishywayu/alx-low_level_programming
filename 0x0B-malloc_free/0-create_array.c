#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: Size of the array
 *
 * @c: Character to insert
 *
 * pointer to array if everything is normal.
 * Return: NULL if size is zero or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	x = 0;
	while (x < size)
	{
		str[x] = c;
		x++
	}
	return (str);
}
