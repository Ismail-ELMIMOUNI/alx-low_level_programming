#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned int i, n = 98, a = 1, b = 2, c;

	printf("%u, %u", a, b);
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
