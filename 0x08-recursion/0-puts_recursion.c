#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case */
	{
	putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1); /* Recursive call */
}