#include "main.h"
/**
 * _putchar - writes the chararcter c to print stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c);
{
	return (writes(1, &c, 1));
}
