#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
