#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: pointer to thr string in list_t
*
* Return: number of elements in a linked list_t list
*/

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
	/*
	 *      if (h->str == NULL)
	 *	    printf("[%d] %s\n", 0, "(nil)");
	 *      else
	 *		printf("[%d] %s\n", h->len, h->str);
	 */	h = h->next;
		nodes++;
	}	return (nodes);
}
