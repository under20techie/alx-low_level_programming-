#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* rev_string - reverses a string
* @s: pointing to a string.
* Return: Always 0 (Success);
*/

void puts2(char *str);
{
int l, m;
l = strlen(str);
for (m = 0; m < l ; m++)
m += 2;
printf("%c", str[m]);
}
printf("\n");
}
