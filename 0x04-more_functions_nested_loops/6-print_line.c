#include "main.h"
/**
  * print_line - Draw a line based on parameter
  * @n: number of lines
  *
  * Return: void
  */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
