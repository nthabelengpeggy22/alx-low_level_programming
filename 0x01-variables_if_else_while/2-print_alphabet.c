#include <stdio.h>

/**
 * main - Print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = "a-z"

	putchar(ch);
	for (ch = 'a'; ch <= 'z'; ch++)
		{
	putchar("%c\n", ch);
		}
	return (0);
}
