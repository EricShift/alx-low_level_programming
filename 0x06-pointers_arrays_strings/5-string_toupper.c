#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes any lowercase letter
 * in a string to uppercase
 * @c: The string to check
 *
 * Return: The uppercased string
 */

char *string_toupper(char *c)
{
	toupper(c);

	return (c);
}
