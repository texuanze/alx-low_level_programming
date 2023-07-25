#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int j;
	int count = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}
	for (j = 0; j < count / 2; j++)
	{
		char i;

		i = s[j];
		s[j] = s[count - 1 - j];
		s[count - 1 - j] = i;
	}
}
