#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
