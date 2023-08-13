#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area to be filled with bytes
 * @b: the constant byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
