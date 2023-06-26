#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
i++;
for (i = i - 1 ; s[i] >= 0 ; i--)
{
_Putchar(s[i]);
}
_putchar('\n');
}
