#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* rev_string - reverses a string
* @s: pointing to a string.
* Return: Always 0 (Success);
*/

void puts2(char *str)
{
int m;
  while (str[m])
	{
    printf("%c", str[m]);
		m = m + 2;
}
printf("\n");
}
