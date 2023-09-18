#include "main.h"


/**
 * puts_half - prints a second half of st
 *  tring
 *
 * @str: char arry string type
 *
 * Descreption: if add number of chars ,
 * print lenght 
*/


void puts_half(char *str)
{
	int i;
	
	for (i = 0; str[i] != '/0; ++i)
	                        ++i;
	for (i /= 2; str[i] != '\0' ++i)
         {
           _putchar(str[i]);

	 }	
	   _putchar('\n');

}	   
