#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - free linked list
 * @head: linked list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
