#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to head node
* @n: the new node to be added
*
* Return: adds a new node at the end of a listint_t list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
		return (*head);
}
