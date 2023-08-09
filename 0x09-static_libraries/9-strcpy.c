#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{

	int l = 0;
	int y = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; y < l; y++)
	{
		dest[y] = src[y];
	}
	dest[l] = '\0';
	return (dest);
}
