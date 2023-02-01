#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print list
 * @h: list to print
 * Return: size of h
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
