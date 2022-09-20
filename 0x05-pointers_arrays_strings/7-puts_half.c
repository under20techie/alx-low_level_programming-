#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the reverse of  a string.
* @str: a pointer to the string array.
*
* Return: Always0 (Success)
*/

void puts_half(char *str)

int z, l;
l = strlen(str);
	for (z = 0; z < l; z++)
	{
		printf("%c", str[z]);
		z = z / 2;
		z = z % 2;
		printf("%c" ,str[z]);
	}
	printf("\n");
}
