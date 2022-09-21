#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destination str
 *
 * @src: pointer to source str
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length, x;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (x = 0; src[x] != '\0'; x++, length++)
	{
		dest[length] = src[x];
	}
	dest[length] = '\0';
	return (dest);
}
