#include "main.h"

/**
 * _isupper- checks for uppercase character
 *
 * @c: check for letters
 *
 * Return: 1 if condition is true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
