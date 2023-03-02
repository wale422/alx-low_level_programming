#include "main.h"
/**
  * _strncpy - Copy a string
  * @dest: Copied  stgring
  * @src: The source string
  * @n: character limit
  *
  * Return: char value
  */
char *_strncpy(char *dest, char *src, int n)
{

	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*ptr++ = '\0';
		n--;
	}
	return (dest);
}
