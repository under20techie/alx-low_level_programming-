#include "main.h"
#include <stdio.h>

/**
 * print_array - in arraya , prints number of element.
 * @a: array thats print
 *
 * @n: number of elements that print
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
