#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *main - Prints the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Returns: always 0 (success)
 **/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
