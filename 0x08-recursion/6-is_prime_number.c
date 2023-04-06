#include "main.h"

/**
 * is_prime_number - checks if an integer is prime
 * @n: the integer to check
 *
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1) /* 1 and below are not prime numbers */
		return (0);

	/* Check if n is divisible by any number from 2 to n/2 */
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0); /* n is divisible by i, so it's not prime */
	}

	return (1); /* n is not divisible by any number from 2 to n/2, so it's prime */
}
