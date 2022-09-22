#include "main.h"

/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 *
 * Return: &dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, p;

	l = j = 0;
	while (*(dest + l))
		l++;
	if (j < n)
		*(dest + l) = *(src + p);
	return (dest);
}
