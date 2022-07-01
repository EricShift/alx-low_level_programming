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

	int n;
	for( n = 'A'; n <= 'Z'; n++)

	{

		putchar(tolower(n));

	}
		putchar('\n');
return (0);

}
