#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* rev_string - reverses a string
* @s: pointing to a string.
* Return: Always 0 (Success);
*/

void rev_string(char *s)
{
int l, i;
char *first_char, *last_char, chr;
l = strlen(s);
first_char = s;
last_char = s;
for (i = 0; i < l - 1; i++)
last_char++;
for (i = 0; i < l / 2; i++) 
{
chr = *last_char;
*last_char = *first_char;
*first_char = chr;
first_char++;
last_char--;

}

}
