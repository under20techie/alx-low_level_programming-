#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* puts2 - reverses a string
* @str: pointing to a string.
* Return: Always 0 (Success);
*/

void puts2(char *str)
{
int m, l;
l = strlen(str);
	for (m = 0; m < l; m++)
	{
		printf("%c", str[m]);
		m = m + 1;
	}
	printf("\n");
}
