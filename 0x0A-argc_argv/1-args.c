#include "main.h"
#include <stdio.h>
/**
* main - function that prints itslef followed by a new name
* @argc: parameter that counts the number of arguements passed to the function
* @argv:an array poniter to the number of strings
* Return: 0 always sucess
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
return (0);
}
