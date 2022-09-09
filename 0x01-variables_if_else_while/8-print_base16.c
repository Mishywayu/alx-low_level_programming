#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N;

	for (N = 48; N < 58; N++)
	{
		putchar(N);
	}
	for (N = 97; N < 103; N++)
	{
		putchar(N);
	}
	putchar('/n');
	return (0);
}
