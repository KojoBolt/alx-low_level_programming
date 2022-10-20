#include "main.h"

/**
 * print_last_digit- print the last num of dight
 *
 * @int: the number
 *
 * Return: the value of the last digth
 */

int print_last_digit(int)

{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');
	return (0);
}
