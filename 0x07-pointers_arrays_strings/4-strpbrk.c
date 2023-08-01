#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found

char *_strpbrk(char *s, char *accept)
{
int f;
while (*s)
{
for (f = 0; accept[f]; f++)
{
if (*s == accept[f])
return (s);
}
s++;
}
return ('\0');
}
