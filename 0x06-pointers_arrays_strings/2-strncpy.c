#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters to be copied
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*ptr++ = *src++;
		i++;
	}

	while (i < n)
	{
		*ptr++ = '\0';
		i++;
	}

	return (dest);
}

