#include <stdio.h>

/**
 * main- Print out lowercase letters
 *
 * Return: 0 when sucessfull
 */

int main(void)

{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == 'e' || i == 'q')
		continue;
	putchar(i);
	}
	putchar('\n');
	return (0);


}
