#include <stdio.h>

/**
 * main - prints alphabet in lowercas, and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z")
	{
		putchar(CH);
		ch++;
	}
	putchar("\n");
	return (0)
}
