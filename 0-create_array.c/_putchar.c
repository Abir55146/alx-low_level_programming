#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to s
 *     tdout
 * @c: The character to print
 *
 * Return: On success 1.
 *   On error, -1 is returned, and errno i
 *   s set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
