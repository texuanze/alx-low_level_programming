#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: destination of copied string
 * @src: sourse of string in question
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}
