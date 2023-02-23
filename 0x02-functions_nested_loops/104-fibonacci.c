#include <stdio.h>
/**
  * main - find and print sum of even valued terms
  * Return: nothing.
  */
int main(void)
{
	int n = 98;
	int i;
	int first_term = 1;
	int second_term = 2;
	int next_term ;
	printf("%d,%d", first_term, second_term);

	for (i = 2 ; i < n; i++)
	{
		next_term = first_term + second_term;
		printf("%d", next_term);
		if (!(i == (n - 1)))
		{
			printf(", ");
		}
		first_term = second_term;
		second_term = next_term;
	}
	printf("\n");
	return (0);
}

