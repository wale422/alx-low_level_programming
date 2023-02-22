#include <stdio.h>
/**
* main - compute multiples of 3 or 5 below 1024
* Return : returns the sum .
*/

int  main(void)
{
	int i;
	int sum;
    
	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
