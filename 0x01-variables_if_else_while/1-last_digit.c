#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point of the program
 * Description: Checking the last the digit of assign number to the variable
 * Return: Always (0) success
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, m);
	}
	return (0);
}


