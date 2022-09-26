#include "main.h"
#define NULL 0
/**
 * _strchr - used to locate a character in a string.
 *
 * @s: string for searching.
 *
 * @c: matching target character.
 *
 * Return: number of bytes matched.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != '\0' && s[x] != c)
		x++;

	if (s[x] == c)
		return (&s[x]);

	else
		return (NULL);
}
