#include "main.h"

/**
 * _isdigit - checks for a digtit 0 though 9
 * @c: is the char to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
