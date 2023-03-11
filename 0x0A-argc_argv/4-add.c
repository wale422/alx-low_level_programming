#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of args positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			break;
		}
		else if (atoi(argv[i]) == 0 || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}
