#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (j % 3 == 0)
			printf("%s", "Fizz");
		else if (j % 5 == 0)
			printf("%s", "Buzz");

		else
			printf("%d", j);
		if (j != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
