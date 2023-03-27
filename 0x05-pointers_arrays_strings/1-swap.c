#include "main.h"
/**
* swap_int - swap the value of int a and int b
* @a: int one
* @b: int two
* Return 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
