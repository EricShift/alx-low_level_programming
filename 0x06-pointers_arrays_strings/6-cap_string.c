#include "main.h"

/**
 * cap_string - This Capitalizes any begining of a word
 * @k: This is the string
 *
 * Return: Gives back the capitalized string
 */

char *cap_string(char *k)
{
	int count = 0, i;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(k + count) >= 97 && *(k + count) <= 122)

		*(k + count) = *(k + count) - 32;
	count++;

	while (*(k + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(k + count) == sep_words[i])
			{
				if ((*(k + (count + 1)) >= 97) && (*(k + (count + 1)) <= 122))
					*(k + (count + 1)) = *(k + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return(k);

}
