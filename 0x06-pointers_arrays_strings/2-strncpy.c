#include "main.h"
#include <string.h>

/**
 * _strncpy - Concatenates one string to another
 * @dest: This is the string to be copied to
 * @src: This is the string to be copied
 * @n: number of bytes to be copied
 *
 * Return: The destination string
 */

char *_strncpy(char *dest, char *src, int n)
{

	strncpy(dest, src, n);

return (dest);
}
