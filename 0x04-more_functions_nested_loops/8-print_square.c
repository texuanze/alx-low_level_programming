#include "main.h"

/**
 * print_square - draws a square
 * @size:size of the square
 * Return:void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int j, p;

		for (j = 1; j <= size; j++)
		{
			for (p = 1; p <= size; p++)
			_putchar('#');
		_putchar('\n');
		}
	}
}
