#include "main.h"

/**
 * more_numbers - prints 0-14 ten times on a new line
 * Return: void
 */
void more_numbers(void)
{
	int j;
	int p;

	for (j = 0; j <= 10; j++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p > 9)
				_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
