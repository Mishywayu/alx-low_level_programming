#include "main.h"
/**
 * string_toupper - changes all lowercase letters od a string to uppercase
 *
 * @a: pointer to string
 *
 * Return: pointer (success)
 */
char *string_toupper(char *a)
{
	int length;

	length = 0;

	while (a[length] != '\0')
	{
		if (a[length] >= 97 && a[length] <= 122)
		{
			a[length] = a[length] - 32;
		}
		length++;
	}
	return (a);
}
