/**
 * _puts_recursion - prints characters of a string recursively
 * @s: the string
 * Return: void
 */

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_puts_recursion(s);

}
