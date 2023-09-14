#include "main.h"
/**
 * more_numbers - print 0 - 14 ten times
 *                and you can only use 
 *                _putchar three times
 *
 * Return: 0 (success)
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		_putchar(j + '0');
	}
	        _putchar('\n');
	}
	        _putchar('\n');
}
