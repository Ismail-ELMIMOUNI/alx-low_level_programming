#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fib1 = 1, fib2 = 2, fib3, sum = 3;

	for (i = 2; i < 50; i++)
	{
		fib3 = fib1 + fib2;
		sum += fib3;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%ld\n", sum);

	return (0);
}
