#include "main.h"
#include <stdio.h>
/**
 * swap_int - to swap two integers
 *@a: Write a function that swaps the values of two integers.
 *@b: declare a new variable
 */

void swap_int(int *a, int *b)
{

int x;

x = *b;
*b = *a;
*a = x;
}
