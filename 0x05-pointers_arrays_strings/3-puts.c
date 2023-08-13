#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
