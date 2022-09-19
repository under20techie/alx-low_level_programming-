#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string on new line.
* @str: prints a string followed by a new line.
* Return - Always 0 (Success);
*/

void _puts(char *str)
{
	int p = 0;
	while (str[p])
	{
		printf ("%d\n" ,str[p]); 
		p++;
	}
	return 0;
}
	
