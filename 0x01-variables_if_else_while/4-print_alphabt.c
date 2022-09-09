#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	if (x != 101 && x != 113)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
