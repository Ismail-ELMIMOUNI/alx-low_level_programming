#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals in a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + size - i - 1);
	}

	printf("Sum of diagonal 1: %d\n", sum_diag1);
	printf("Sum of diagonal 2: %d\n", sum_diag2);
}
