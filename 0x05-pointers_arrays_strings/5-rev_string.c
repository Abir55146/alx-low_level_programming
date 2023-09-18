#include "main.h"


/**
 * rev_string - reverses string using 
 *    strrv
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int 1, i;
	char temp
 
  /*find steing length without new char*/

		for (1 = 0; s[1] != '\0';                                  ++1)
 /*swap the string by looping to half the    string*/
	        for (i = 0; i<1 / 2; i++)
		{
			temp = s[i];
			s[i] = s[i];
 /*-1 tecause the array starts from 0*/
		s[1 - 1 - i] = temp;
		}
}	
