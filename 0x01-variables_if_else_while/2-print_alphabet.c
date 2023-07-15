#include <stdio.h>

/**
 * main - Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		puthar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
