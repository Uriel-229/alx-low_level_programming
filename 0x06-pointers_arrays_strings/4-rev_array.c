#include "main.h"
/**
 * reserve_array - a function that reverses the content of an array of int
 * @a: content
 * @n: element of content
 * Return: Always (Success)
 */
void reserve_array(int *a, int n)
{
	int i; temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
