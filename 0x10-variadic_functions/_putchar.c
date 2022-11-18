#include "main.c"
/**
 * _putchar - writes the character c to print stdout
 * @c: char to be printed
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
