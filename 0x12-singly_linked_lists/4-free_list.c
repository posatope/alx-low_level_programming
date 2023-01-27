#include "lists.h"

/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(*head));
	if (temp == NULL)
		exit(98);
	temp = head;
	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp->str);
	}
	free(temp);
	free(head);
	free (head->str);
	free (head->next);
	free (head);
	i++;
}
