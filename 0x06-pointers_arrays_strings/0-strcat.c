#include <string.h>
#include "main.h"

/**
* _strcat - a  function that concatenates two strings char to dest.
* @ char *src: pointer to string being appended to dest string.
* @ char *dest: a pointer to string that scr is being added to.
* Return: Always 0 (Success);
*/

char *_strcat(char *dest, char *src)
{
	int k , l , m;
	l = strlen (dest);
	n = strlen (src)
	for (k = 0; k < l; k++)
	{
		for (m =0; m < n; m++)
	while ((*(dest + k) = *(src + m)))
		 {
		m++;
		k++;
		 }
	}
return (dest);		
}
