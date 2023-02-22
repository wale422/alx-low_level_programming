#include "main.h"
/**
*print_alphabet - The program prints the lower case alphabet
*
*Return: always 0
*/
void  print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
