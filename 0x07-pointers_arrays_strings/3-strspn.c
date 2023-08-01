#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: prefix to be meassured
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int f;
	
	while (*s)
	{
			for (f = 0; accept[f]; f++)
			{
				if (*s == accept[f])
				{
					bytes++;
					break;
				}
				else if (accept[f + 1] == '\0')
					return (bytes);
			}
			s++;
	}
	return (bytes);
}
