#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int half_len = (len + 1) / 2;
	int i;

	for (i = half_len; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}

