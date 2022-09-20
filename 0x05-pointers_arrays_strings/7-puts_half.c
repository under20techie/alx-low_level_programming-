#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the reverse of  a string.
* @str: a pointer to the string array.
*
* Return: Always0 (Success)
*/

void puts_half(char *str)
{
	int v = 0;

	while (str[v])
		printf("%c", str[v]);
	v = v / 2;
	while (str[v])
		v = v % 2;
	printf("%c", str[v]);
	       v++;
	}
	printf("\n");
}
