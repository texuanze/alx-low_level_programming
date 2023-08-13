#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the length of a string
 * @s: a string
 * Return: String length.
 */
int _strlen(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}
	return (count);
}
