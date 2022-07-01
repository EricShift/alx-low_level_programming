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
	int i;

	for (i = 48; i <= 57; i++)

	{

		putchar(i);
		if (i == 57)
			break;
		putchar(44);
		putchar(32);

	}

	putchar('\n');

return (0);

}
