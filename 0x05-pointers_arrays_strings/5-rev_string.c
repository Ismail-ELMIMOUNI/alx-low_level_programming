#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	for (int i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

