#include "main.h"
/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char sh[8] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(sh[x]);
	}
	_putchar('\n');

	return (0);
}
