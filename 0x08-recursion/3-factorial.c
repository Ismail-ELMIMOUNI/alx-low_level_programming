#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of the given number, or -1 if an error occurred
 */
int factorial(int n)
{
	if (n < 0) /* error handling */
		return (-1);

	if (n == 0) /* base case */
		return (1);

	return (n * factorial(n - 1)); /* recursive call */
}
