#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * This program checks whether an integer is negative, positive, or zero.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int x;
for (x = 48; x < 57; x++)
{
putchar(x);
putchar(',');
putchar(' ');
}
putchar(57);
return (0);
}
