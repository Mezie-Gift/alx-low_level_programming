#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head node
* @idx: the index of the list where the new node should be added
* @n: new node
*
* Return: address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if ((head == NULL && idx != 0) || new_node == NULL)
		return (NULL);
	new_node->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (current->next)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	else
	{
		new_node = NULL;
		current->next = new_node;
	}
	return (new_node);
}
