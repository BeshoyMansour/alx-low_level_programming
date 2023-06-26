#include "main.h"
#include <stdio.h>
/**
 * Write a function that swaps the values of two integers.
 */

void swap_int(int *a, int *b)
{

int x;

x = *b;
*b = *a;
*a = x;
}
