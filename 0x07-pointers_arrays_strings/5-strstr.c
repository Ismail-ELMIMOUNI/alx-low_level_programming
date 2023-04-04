#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the located substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *check;

	while (*haystack != '\0')
	{
		start = haystack;
		check = needle;

		while (*check == *haystack && *check != '\0' && *haystack != '\0')
		{
			check++;
			haystack++;
		}

		if (*check == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
