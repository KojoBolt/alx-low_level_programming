#include "main.h"

/**
 * print_last_digit- print the last num of digit
 *
 * @n: asign the num
 *
 * Return: the value of the last digth
 */

int print_last_digit(int n)

{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (ld);
}
