#include "main.h"
/**
 * reverse_array - Used to reverse the content of an array
 *
 * @a: pointer to array
 *
 * @n: number of elements of an array
 *
 * Return: void (Success)
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;

	counter = 0;

	while (counter <= n)
	{
		temp = a[counter];

		a[counter++] = a[n];

		a[n--] = temp;
	}
}
