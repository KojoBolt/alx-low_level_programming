#include "main.h"

/**
 *  _strlen- returns the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)

	len++;
	return (len);
}
