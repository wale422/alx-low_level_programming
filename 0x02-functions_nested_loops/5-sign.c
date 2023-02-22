#include "main.h"
#include <stdio.h>
/**
* print_sign -checks for positive , negative or zero and prints sign
* @n: number to be checked for sign
* Return: 1 if n is  positive 0 if n is zero or -1 if n is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
