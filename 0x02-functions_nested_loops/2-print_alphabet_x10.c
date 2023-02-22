#include "main.h"
/**
*print_alphabet_x10 - The program prints the lower case a-z ten times
*
*Return: always 0
*/
void  print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
