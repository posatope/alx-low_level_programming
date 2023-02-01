#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_listint2 - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	int i = 0;
	listint_t ** h;

	if (*head == NULL)
		return;
	*h = (*head)->next;
	free_listint2(h);
	free(*head);
	i++;
}
