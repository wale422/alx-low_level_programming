#include "main.h"
/**
  * _strncat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  * @n: The end of source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{

	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
