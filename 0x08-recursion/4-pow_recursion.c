#include "main.h"

/**
 * _pow_recursion - gives the value of x raised to the power of y
 * @x: the number to be raised
 * @y: the power x is to be raised to
 * Return: value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
