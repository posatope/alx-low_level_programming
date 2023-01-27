#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: list to print
 * Return: size of h
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
