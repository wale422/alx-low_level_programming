#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print  n to 98.
 * @n: the starting number to 98
 * Return: void .
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d%c ", n, ',');
		}
		printf("%d\n",98);
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d%c ", n, ',');
		}
		printf("%d\n",98);
	}
}
