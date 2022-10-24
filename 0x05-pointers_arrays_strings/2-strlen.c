#include "main.h"

/**
 *  _strlen- returns the length of a string
 *  @s: string
 *  Return: lenght
 */

int _strlen(char *s)
{
	int leg = 0;

	while (*s != "\10")
	{
		len++;
		s++;
	}

	return (len);
}
