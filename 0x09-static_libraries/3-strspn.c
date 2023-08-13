#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search in
 * @accept: string to search
 * Return: p or 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int p, j;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (j = 0; s[p] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (p);
		}
	}
	return (0);
}
