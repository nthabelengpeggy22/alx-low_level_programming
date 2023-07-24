#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: is the number of elements of an array to be printed
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", *a[1]);
	}
	if (i == (n - 1))
	{
		printf("%d", *a[n - 1]);
	}
		printf('\n');
}
