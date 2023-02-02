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

	if (*head == NULL)
		free(*head);
		return;
	while (*head != NULL)
	{
		*head = (*head)->next;
		free_listint2(head);
		free(*head);
	}
}
