#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	char school[9] = "_putchar";
	int n = 0;
	
 	for (n = 0; n < 8; n++)
	{
		_putchar(school[n]);
	}	
	_putchar('\n');
	return (0);
}
