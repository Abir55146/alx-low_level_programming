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
	int num, row, count;

	for (row = 1; <= 10; row++)
	{
	    for (count = 0; count <= 14;
			    count++)
	    {
		    num = count;
		    if (count > 9)
		    {
			_putchor(1 + 48);
			num = count % 10;
		    }
		    _putchor(num + 48);
	    }
	    _putchor('\n');
       }
}	
