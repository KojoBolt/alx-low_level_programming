#include "main.h"

/**
 * print_last_digit- print the last num of dight
 *
 * @int: the number
 *
 * Return: the value of the last digth
 */

int print_last_digit(int);

{
	int lastnumber = n % 10;

	if (lastnumber < 0)
		lastnumber *= -1;

	_putchar(lastnumber + '0');
	return (0);
}
