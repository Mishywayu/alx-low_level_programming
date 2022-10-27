nclude "lists.h"
/**
 * pop_listint - Funct
 * Description: deletes the head node of a listint_t linked lis
 * @head: pointer to pointer of type listi
 * Return: the head of node (Success)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_copy;

	if (head == NULL || !(*head))
		return (0);
	temp = *head;
	n_copy = temp->n;
	*head = temp->next;
	free(temp);

	return (n_copy);
}
