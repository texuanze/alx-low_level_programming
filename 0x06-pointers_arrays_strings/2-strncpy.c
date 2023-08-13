#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination file
 * @src: source file
 * @n: bytes taken up by destination file
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
