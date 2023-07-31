#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string in question
 * @accept: the string being cross-referenced
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		char *currentAccept = accept;

		while (*currentAccept != '\0')
		{
			if (*s == *currentAccept)
				return (s);
			currentAccept++;
		}
		s++;
	}
	return (NULL);
}
