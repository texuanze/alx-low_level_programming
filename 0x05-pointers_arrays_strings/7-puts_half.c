#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string in question
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n, p, count = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		count++;
	}
	p = (count - 1) / 2;
	for (n = p + 1; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

