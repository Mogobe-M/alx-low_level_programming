/**
 * File: 3-islower.c
 * Auth: Mogobe-M
 **/

#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int check_alphabet(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
