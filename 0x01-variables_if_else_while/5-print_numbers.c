#include <stdio.h>

/**
 * main- Print a base number starting from 0
 *
 * Return: 0 when sucessfull
 */

int main(void)

{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
