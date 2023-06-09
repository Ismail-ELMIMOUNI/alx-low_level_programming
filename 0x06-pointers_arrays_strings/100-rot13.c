#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char *rot = s;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (rot);
}

