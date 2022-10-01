#include "main.h"
#include <stdio.h>
/**
* main - function that prints itslef followed by a new name
* @argc: parameter that counts the number of arguements passed to the function
* @argv:an array poniter to the number of strings
* Return: 0 always sucess
*/
int main(int argc, char *argv[])
{
int i;
int mult;
  if (argc < 2)
{
    printf("%s\n", Error);
  return (1);
}
	for (i = 1; i < argc; i++)
    mult *= atoi(argv[i]);
		printf("%d\n", atoi(argv[i]));
	return (0);
}
