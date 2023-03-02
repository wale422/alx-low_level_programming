#include "main.h"
/**
  * reverse_array - Reverses array elements
  * @a: An array of integers
  * @n: size of array
  *
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
