#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

void positive_or_negative(int i)
{
	if (i < 0)
	{	
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{	
		printf("%d is zero\n", i);
	}
}
	/* your code goes there */
	return (0);
}
