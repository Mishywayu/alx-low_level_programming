#include <stdio.h>
#include "main.h"
/**
 *
 * check for alphabetuc character
 *
 * Return 1 if c is a letter, lowercase or uppercase
 *
 * Return 0 otherwise
 */
int isapha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
