#include "main.h"

/**
 * print_array - prints the elements of an array of integers
 * @a: array in question
 * @n: number of elements to be printed
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
			printf(", ");
	}
	printf("\n");
}
