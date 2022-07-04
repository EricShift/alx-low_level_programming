#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - prints to the screen using puts function
 *
 *Return: If successful the exit status is zero
 *
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)

	{
		for (j = 49; j <= 56; j++)
		{

			for (k = 50; k <= 57; k++)
			{
				if ((i >= j) || (j >= k))
					continue;
			putchar(i);
			putchar(j);
			putchar(k);
				if ((j == 57) && (i == 56))
				{
					if (i == 55)
						break;
				}
				putchar(44);
				putchar(32);

			}
		}
	}

	putchar('\n');

return (0);

}
