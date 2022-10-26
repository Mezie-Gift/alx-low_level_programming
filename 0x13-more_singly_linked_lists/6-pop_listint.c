#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to the head node
*
* Return: the head node’s data (n) or
* 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	first_node = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (first_node);
}
