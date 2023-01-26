#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - print list
 * @head: list to print
 * @str: new string
 * Return: size of h
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    int i = 0;
    
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
		return (NULL);
	while (str[i])
		i++;

	new_node->len = i;
    new_node->str = strdup(str);
    new_node->next = *head;
    *head = new_node;
    return (*head);
}
