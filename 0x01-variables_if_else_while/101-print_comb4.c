#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n, m, l;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(l + '0');

				if (n < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
