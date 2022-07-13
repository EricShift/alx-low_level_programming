#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates one string to another
 * @dest: This is the string to be concatenated to
 * @src: This is the string to be concatenated
 * Return: The destination string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
