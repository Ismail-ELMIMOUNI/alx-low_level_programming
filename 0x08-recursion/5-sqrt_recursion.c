#include "main.h"

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of.
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion_helper(n, 1, n));
}

/**
 * _sqrt_recursion_helper - helper function to recursively calculate
 *                          the natural square root of a number.
 * @n: the number to calculate the square root of.
 * @min: the minimum possible value of the square root.
 * @max: the maximum possible value of the square root.
 *
 * Return: the natural square root of n, or -1 if n does not have a
 *         natural square root.
 */
int _sqrt_recursion_helper(int n, int min, int max)
{
int mid = (min + max) / 2;

	if (min > max)
		return (-1);

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (_sqrt_recursion_helper(n, min, mid - 1));
	else
		return (_sqrt_recursion_helper(n, mid + 1, max));
}
