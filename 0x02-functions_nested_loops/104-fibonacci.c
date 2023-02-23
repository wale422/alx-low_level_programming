#include <stdio.h>
/**
  * main - find and print sum of even valued terms
  * Return: nothing.
  */
int main(void)
{
	int n = 98;
	int i;
	unsigned long long int first_term = 1;
	unsigned long long int second_term = 2;
	unsigned long long int next_term ;
	printf("%llu,%llu", first_term, second_term);

	while (first_term + second_term < 1000000000)
	{
		next_term = first_term + second_term;
		printf("%llu", next_term);
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

