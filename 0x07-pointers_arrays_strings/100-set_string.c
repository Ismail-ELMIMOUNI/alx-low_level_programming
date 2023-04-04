#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char.
 */
void set_string(char **s, char *to)
{
	int i;

	/* Free memory allocated for *s */
	free(*s);

	/* Get length of to */
	for (i = 0; to[i]; i++)
		continue;

	/* Allocate memory for *s with the same length as to */
	*s = malloc(sizeof(char) * (i + 1));

	/* Copy to to *s */
	for (i = 0; to[i]; i++)
		(*s)[i] = to[i];

	(*s)[i] = '\0';
}
