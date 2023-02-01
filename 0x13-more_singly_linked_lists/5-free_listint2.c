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
	listint_t *x;
	
	if (*head == NULL)
	    return;
	x = malloc(sizeof(*head));
	if (x == NULL)
		return;
	x = *head;
	free(x);
}
