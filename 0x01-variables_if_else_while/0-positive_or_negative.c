/**
*File: 0-positive_or_negative.c
*Auth: Mogobe Monoge
 **/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Assign a random number to the variable n each time it
is executed. Complete the source code in order to print whether the number
 stored in the variable n is positive or negative.
 *discription: using the main function
 *return 0
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
