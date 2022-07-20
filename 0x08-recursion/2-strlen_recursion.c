#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Return length of a string
 * @s: The string
 *
 * Return: an int which is the length
 */

int _strlen_recursion(char *s)
{
	strlen(s);
	return (_strlen_recursion(++s));
}
