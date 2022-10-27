#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: n
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (i = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; a < b; b++)
	{
		dest[a + b] = src[b];
		if (src[b] == '\0')
			b = n;
	}
	return (dest);
}
