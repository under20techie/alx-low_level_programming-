#include <stdio.h>
#include <unistd.h>
/**
<<<<<<< HEAD
 *  * main - print quote
 *   *
 *    * Description: prints Dora's quote
 *     *
 *      * Return: Always 1 (Success)
 *       */

int main(void)
{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
			return (1);
=======
* main - print quote
*
* Description: prints Dora's quote
*
* Return: Always 1 (Success)
*/
int main(void)
{
   write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
   return (1);
>>>>>>> 187c0979b028d12f790fae8a5f2256588acf7e7c
}
