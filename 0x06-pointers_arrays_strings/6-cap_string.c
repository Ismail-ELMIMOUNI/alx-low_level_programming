#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string to be capitalized
 *
 * Return: A pointer to the capitalized string
 */
char *cap_string(char *str)
{
int i;

	/* Check for null input */
	if (str == NULL)
		return (NULL);

	/* Capitalize the first letter of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';

	/* Capitalize the first letter of each word */
	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}') &&
			(str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 'a' - 'A';
		}
	}

	return (str);
}
