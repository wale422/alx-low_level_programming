#include "main.h"
/**
  * _isupper - Check if a letter is upper
  * @c: The character to be checked
  * Return: 1 for upper letter 0 for other
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
