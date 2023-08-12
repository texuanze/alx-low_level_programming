#include "main.h"

/**
 * print_most_numbers - print numbers 0-9 without 2 & 4 and a new line
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j != 2 && j != 4)
			_putchar(j + '0');
	}
	_putchar('\n');
}
