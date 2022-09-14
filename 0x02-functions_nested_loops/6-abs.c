#include <stdio.h>
#include "main.h"
/**
 * @c: integer
 * Return: Always 0 (Success)
 */
int _abs(int c)
{
	if (c > 0)
	{
		c = +c;
	}
	else
	{
		c = -c;
	}
	return (c);
}
