#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *index;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	index = malloc(sizeof(char) * (i + j + 1));

	if (index == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		index[i] = str[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		index[i] = s2[j];
		i++, j++;
	}
	index[i] = '\0';
	return (index);
}
