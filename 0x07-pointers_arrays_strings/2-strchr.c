#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @c: character to be located
 * @s: string to be searched
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
