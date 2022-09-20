#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements in the array a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int f = 0;

	while (f < n)
	{
		printf("%d", a[f]);
		if (f < (n - 1))
			printf(", ");
		f++;
	}
	printf("\n");
}
