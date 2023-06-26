#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 *
 * @s: The character containing the string
 *
 * Return: The length of the character
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
