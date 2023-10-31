#include "main.h"

/**
* my_strlen - Reads the length of string
*
* @s: Returns the value of a string
*
* Return: k;
*/

int my_strlen(char *s)
{
	int k = 0;
	while (s[k])
		k++;
	return (k);
}
