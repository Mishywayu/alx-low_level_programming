#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free a list
 * @head: address of the first node
 */
void free_listint(listint_t *head)
{
	listint_t *t, *t2;

	t = head;
	while (t != NULL)
	{
		t2 = t->next;
		free(t);
		t = t2;
	}
}
