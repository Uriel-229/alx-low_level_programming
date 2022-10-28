#include "main.h"
/**
 * reserve_array - reserves an array of integer
 * @a: arrays
 * @n: number of element of the array
 * Return: 0
 */
void reserve_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
