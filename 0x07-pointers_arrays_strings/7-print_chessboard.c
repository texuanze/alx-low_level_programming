#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, p;

	for (j = 0;  j < 8; j++)
	{
		for (p = 0; p < 8; p++)
		{
			_putchar(a[j][p]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
