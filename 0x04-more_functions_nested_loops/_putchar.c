#include "main.h"
#include <unistd.h>
/**
 * Putchar - writes the character c to stdout
 * @c: is the character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

int_putchar(char c)
{
	return (writes(1, &c, 1));
}
