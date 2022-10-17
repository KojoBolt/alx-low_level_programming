#include <stdio.h>

/**
 * main- prints the lowercase alphabet in reverse
 *
 * Return: 0 when sucessfull
 */

int main(void)

{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
	putchar(d);
	}
	putchar('\n');
	return (0);
}
