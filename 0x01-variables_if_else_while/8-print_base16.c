#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	char ch;

	i = 0;
	ch = 'a';
	while
		(i < 10)
		{
			putchar(i + '0');
			i++;
		}
	while
		(ch <= 'f')
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}
