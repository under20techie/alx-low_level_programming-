#include "main.h"
#include <stdio.h>

/**
* print_rev - prints the reverse of  a string.
* @s: a pointer to the string array.
*
* Return: Always0 (Success)
*/

void print_rev(char *s)
{
  int r = 0;
  int max = 50;
  
  for (r=0; r < max; r--)
  {
    printf("%c", s[r]);
  }
  printf("\n");
}
