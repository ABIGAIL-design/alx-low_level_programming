#include "main.h"

/**
 *swap_int - swaping the value of two ints.
 *@a: pointer to one int.
 *@b: pointer to the second int.
 *
 *Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
