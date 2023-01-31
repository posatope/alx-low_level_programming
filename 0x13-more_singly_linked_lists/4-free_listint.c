#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
	i++;
}
