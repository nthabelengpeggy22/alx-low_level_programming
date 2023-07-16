#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit is %d and %d is 0\n", n, m);
	}
	else
	{
		printf("Last digit is %d and %d is less than 6 and not 0\n", n, m);
	}
	return (0);
}
