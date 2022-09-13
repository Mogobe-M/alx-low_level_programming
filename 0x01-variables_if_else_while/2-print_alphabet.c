/**
 *File: 2-print_alphabet.c
 *Auth: Mogobe Monoge 
 **/

#include <stdio.h>

/**
 *main- print lowercase alphabets
 *discription: the code is in the main function
 *Return: 0
 **/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
