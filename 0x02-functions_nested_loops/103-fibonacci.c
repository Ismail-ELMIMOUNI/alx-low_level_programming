#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum += fib1 + fib2;

		fib1 = fib2;
		fib2 = fib1 + fib2;
	}
	printf("%lu\n", sum);

	return (0);
}
