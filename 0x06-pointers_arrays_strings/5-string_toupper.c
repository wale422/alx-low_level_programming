#include "main.h"
/**
  * string_toupper - lower case to upper case('a'-32)
  * @str: The string to modify
  *
  * Return: pointer to modified string
  */

char *string_toupper(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
