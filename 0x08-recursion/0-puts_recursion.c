#include "main.h"

/**
* _puts_recursion - functionter that prints the value of the pointers
* @char s: pointer the the string.
*/

void _puts_recursion(char *s)
{
	int i;
	while (*(s + i))
	{
	putchar(*(s + i));
	i++
	}
	putchar ('\n');
}
