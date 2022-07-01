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

	for (i = 97; i <= 122; i++)

	{

		putchar(i);

	}

	for (i = 65; i <= 90; i++)

	{       
                putchar(i);
	}

		putchar('\n');

return (0);

}
