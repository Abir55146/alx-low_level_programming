#include <stdlib.h> 
 #include <time.h> 
#include <stdio.h>


/**
 * main - entry point 
 *
 * Description: print value of n grearer than 0 
 *
 * Return: 0 ( sucsses
*/

 int main(void) 
 { 
         int n, digit;
  
	srand(time(0)); 
	n = rand() - RAND_MAX / 2; 
        digit = % 10;
	
	if (digit > 5)
	       printf(Last digit of %i is %i  and is                   greater than 5\n", n, digit);
	if else  (digit == 0)
               printf(Last digit of %i is %i  and is                   0\n", n digit);
	 else if (digit < 6 && digit != 0) 
	         printf(Last digit of %i is %i  and is                   less than 6 and not 0\n" n, digit);
	  return (0); 
 }
