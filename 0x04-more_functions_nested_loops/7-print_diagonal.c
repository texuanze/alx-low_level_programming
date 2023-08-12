#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of times '\' is printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j, k;

		for (j = 1; j < n; j++)
		{
			for (k = 0; k <= j; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}

