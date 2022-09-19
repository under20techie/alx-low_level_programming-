#include "main.h"

/**
* swap_int(int *a, int *b) - swap values of *a and *b.
*
* @a,b:swap both the value of pointers a and b.
*
* Return: Always 0 (Success);
*/

void swap_int(int *a, int *b)
{
int k;
k = *a;
*a = *b;
*b = k;
}
