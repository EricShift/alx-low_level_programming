#include "main.h"
/**
 * swap_int - This changes the positions of the values
 * @a: This is a pointer to the first value
 * @b: This is a pointer to the second value
 * @c: This holds the first value for later use
 *
 * Return: Null void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
