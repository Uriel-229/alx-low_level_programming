#include "main.h"

/**
 * _islower - tests whether a character is a lowercase letter from the alphabet
 * @c: character to test.
 *
 * Return: 1 if it is lowercase letter, 0 if it not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
