#include "main.h"
#include <string.h>
/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
