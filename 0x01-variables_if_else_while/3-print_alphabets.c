/**
 *File: 3-print_alphabets.c
 *Auth: Mogobe Monoge
 **/

#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *return: 0
 **/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
