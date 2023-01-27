#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	int i = 0;
	while (head->next != NULL)
	{
		free(head->str);
		free (head->next);
		free head
		i++;
	}
	free (head->str);
	free (head->next);
	free (head);
	i++;
}
