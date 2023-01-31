#include "lists.h"

 * free_listint2 - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	int i = 0;
	listint_t *x, *y;
	if (*head == NULL)
	    return;
	while (*head)
	{
		x = *head;
		if (x == NULL)
			return;

		y = x->next;
		free_listint2(x);
		free(*head);
		i++;
	}
}
