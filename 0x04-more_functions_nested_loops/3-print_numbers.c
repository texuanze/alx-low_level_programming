#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9 then a ne line
 * Return: void
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
		_putchar(j + '0');
	_putchar('\n');
}
