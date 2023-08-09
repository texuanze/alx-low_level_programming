#include "main.h"

/*
 * _strdup - copies string to newly allocated memory space
 * @str: string being copied
 * Return: a ponter to the new memory
 */
char *_strdup(char *str)
{
	int j;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return  (NULL);
	for (j = 0; str[j] != '\0'; j++)
		copy[j] = str[j];
	return (copy);
}
