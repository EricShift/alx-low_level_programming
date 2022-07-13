#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 * @n: number of bytes to be copied
 *
 * Return: The destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

return (dest);
}
