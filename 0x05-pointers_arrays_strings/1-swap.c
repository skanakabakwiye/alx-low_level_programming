#include "main.h"
/**
 *swap_int - Swap two integers
 * 
 * variables - *a and *b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
