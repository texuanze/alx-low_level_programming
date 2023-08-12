#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: the digit in question
 * Return: 1 if a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
		return (1);
	else
		return  (0);
}
