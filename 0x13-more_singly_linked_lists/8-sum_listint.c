#include "lists.h"

/**
* sum_listint - sums all data of a list
* @head: list's head
*
*Return: sum of list's data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
