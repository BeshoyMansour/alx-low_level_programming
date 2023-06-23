#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void print_most_numbers(void)
{

for (int n = 0; n < 10 ; n++)
{
for (int ch = 48 ; ch < 58 ; ch++)
{
_putchar(ch);
}

for (int x = 48 ; x < 52 ; x++)
{
_putchar(49);
_putchar(x);
}
_putchar('\n');
}
}
