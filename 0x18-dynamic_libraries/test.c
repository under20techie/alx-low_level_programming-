#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * printf - intercepts the normal printf implentation and value to print
 * @format: string to print formatted
 *
 */
int printf(const char *restrict format, ...)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
