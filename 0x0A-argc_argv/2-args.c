#include <stdio.h>
/**
 * main - prints argument all arguments it recieves
 * @argc: argument count
 * @argv: pointer to arguments passed
 *
 * Return: 0
 */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
