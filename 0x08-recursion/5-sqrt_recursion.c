#include "main.h"

int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - gives the natural square root of a given number
 * @n: the number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1, n));
}
/**
 * _sqrt_helper - Recursive helper function to calculate square root
 * @n: number to calculate the sqaure root of
 * @n: The number for which to calculate the square root
 * @start: The lower bound of the search range
 * @end: The upper bound of the search range
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;
	
	if (mid <= n / mid && (mid + 1) > n / (mid + 1))
	{
		return (mid);
	}
	else if (mid > n / mid)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}
