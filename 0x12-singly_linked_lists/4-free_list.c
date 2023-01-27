#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	int i = 0;
	while (head)
	{
		free(head->str);
	}
	free(head);
	head = head->next;
        i++;
}
