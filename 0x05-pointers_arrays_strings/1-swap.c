#include "main.h"

/**
* swap_int - swap values of *a and *b.
*
* @a:swap the value of pointer a to b.
* @b:swap the value of pointer b to a.
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
