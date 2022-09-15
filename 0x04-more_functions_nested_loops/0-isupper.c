#include "main.h"
/**
 * _isupper - check parameter is an uppercase character
 *
 * @c:
 *
 * Return 1 if uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
