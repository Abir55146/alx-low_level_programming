#include "main.h"


/**
 * _strlen - returns the length of string
 *
 * @s: string parameter input 
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int s;
        
	int count = 0;

	for (count = 0; *s != '\0'; s++)

		count++;
	 return (count);
}
