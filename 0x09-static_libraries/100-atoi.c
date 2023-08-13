#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string in question
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				__builtin_trap();
			}
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
