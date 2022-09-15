#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */

void printnumber(int n)
{

   if (n < 0) {
       putchar('-');
       n = -n;
   }

   if (n == 0)
      putchar('0');

   if (n/10)
      printnumber(n/10);

   putchar(n%10 + '0');
}

int main(int argc, char** argv)
{
   int n = atoi(argv[1]);
   printnumber(n);
   printf("\n");
}
