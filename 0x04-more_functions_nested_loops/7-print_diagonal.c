#include "main.h"

/**
 * print_diagonal - prints a line of \ n long
 * @n: length of line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('\\');
		line++;
	}
	_putchar('\n');
}
