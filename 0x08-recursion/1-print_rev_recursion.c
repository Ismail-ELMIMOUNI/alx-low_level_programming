#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return;

	/* Recursive case */
	_print_rev_recursion(s + 1);
	putchar(*s);
}
