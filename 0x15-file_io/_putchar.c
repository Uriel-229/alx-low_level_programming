#include "main.h"
/**
 * _putchar - writes the character c to print stdout
 * @c: char to be printed
 * Return: 1 on succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}