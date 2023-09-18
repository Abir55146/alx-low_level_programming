#include "main.h"


/**
 * swap _ int - swaps valuos of two itnog
 *        ers using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}	
