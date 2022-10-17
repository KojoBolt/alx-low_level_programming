#include <stdio.h>

/**
 * main- Print out lower and uppercase letter
 *
 * Return: 0
 */

int main(void)

{

	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);

	}

	for (j = 'A'; j <= 'Z'; i++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);



}
