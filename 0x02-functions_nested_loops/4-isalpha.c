#include "main.h"

/**
 * _isalpha- a function that checks for alphabetic character
 *@c: the char should be checked
 *
 * Return: 1 lowercase or uppercase else print 0
 */

int _isalpha(int c)

{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);




}
