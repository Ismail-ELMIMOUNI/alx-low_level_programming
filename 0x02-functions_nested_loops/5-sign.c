#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to check
 *
 * Return: 1 if n is greater than zero, 0 if n is zero
 * , -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
