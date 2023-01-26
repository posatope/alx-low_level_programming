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
		return (NULL);
	temp = head;
	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
	i++;
}
