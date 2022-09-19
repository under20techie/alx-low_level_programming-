#include "main.h"

/**
* _puts - prints a string on new line.
* @str: prints a string followed by a new line.
* Return - Always 0 (Success);
*/

void _puts(char *str)
{
	int p = 0;
	while (str[p])
		printf ("%s\n" ,str[p]) 
		p++;
	return 0;
}
	
