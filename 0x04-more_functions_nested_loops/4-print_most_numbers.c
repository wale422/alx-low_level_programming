#include "main.h"
/**
  * print_most_numbers - Print 0 up to 9 except 2 and 4
  *
  * Return:numbers 0 up to 9 with no 2 or 4
  */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + '0');
	}

	_putchar('\n');
}
