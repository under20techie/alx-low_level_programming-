#include "main.h"

/**
 * puts_half -  prints half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	int m = 0, l = 0, p;

	while (str[m++])
		l++;

	if ((l % 2) == 0)
		p = l / 2;

	else
		p = (l + 1) / 2;

	for (m = p; m < l; m++)
		_putchar(str[m]);

	_putchar('\n');
}
