#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: th string in question
 * @needle: the substring being located
 * Return: start or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (*sub == '\0')
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
