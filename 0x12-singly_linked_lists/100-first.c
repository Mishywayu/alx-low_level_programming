#include <stdio.h>
/**
 * bmain - function executed before main
 * Return: no return (Success)
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon mu back!\n");
}
