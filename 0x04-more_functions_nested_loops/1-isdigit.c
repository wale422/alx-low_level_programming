#include "main.h"
/**
  * _isdigit - Check if a character is a digit
  * @c: The character to be checked
  * Return: 1 for upper letter 0 for other
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}