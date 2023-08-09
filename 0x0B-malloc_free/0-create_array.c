#include "main.h"

/*
 * *create_array - makes an array
 * @size: the size of the array
 * @c: the character that initialises the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		arr[j] = c;
	return (arr);
}
