#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
size_t *ptr=h;
while (ptr)
{
if (ptr->next!=NULL)
{
i++;
printf("[%u] %s\n", ptr->len, ptr->str);
}
else
printf("[0] (nil)\n");
ptr = ptr->next;

}
return (i);
}
