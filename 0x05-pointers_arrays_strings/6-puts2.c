#include "main.h"
/**
  * puts2 - Prints every other character of a string
  * @str: The string to be treated
  *
  * Return: void
  */
void puts2(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}

