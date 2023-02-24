#include <stdio.h>
#include <math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main (void)
{
	int i = 2;
	long n = 612852475143;
	int largest = 2; 

	while( n != 1)
	{
		if(n % 1 == 0)
		{
			while (n % i == 0)
			{
				if( i > largest)
				{
					largest = i ; 
				}
				n = n / i;
				
			}
		}
		i++;
	}
	printf("%d\n", largest);
}
