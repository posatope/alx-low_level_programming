#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: list to print
 * Return: size of h
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->*next;
		i++;
	}
	return (i);
}
