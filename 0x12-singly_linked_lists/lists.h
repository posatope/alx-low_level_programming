#ifndef LIST_H
#define LIST_H
#include <stdlib.h>

/**
 * struct node - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct node {
	char *str;
	int len;
	struct node *next;
}list_t;

size_t print_list(const list_t *h);

#endif
