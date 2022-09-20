#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  prints random password generator for 101-crackme
 *
 * Return: always 0
 */
int main(void)
{
	int u, j, k, s;
	char alpha[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char p[58];

	srand(time(NULL));
	while (s != 2772)
	{
		u = w = x = 0;
		while ((2772 - 122) > x)
		{
			v = rand() % 62;
			p[u] = alpha[v];
			x += alpha[v];
			u++;
		}
		while (alpha[w])
		{
			if (alpha[w] == (2772 - x))
			{
				p[u] = alpha[w];
				x += alpha[w];
				u++;
				break;
			}
			w++;
		}
	}
	p[u] = '\0';
	printf("%s", p);
	return (0);
}
