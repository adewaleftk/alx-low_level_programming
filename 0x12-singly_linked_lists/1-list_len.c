#include "lists.h"

/**
 * list_len - find length of a linked list
 *
 * @h: the linked list
 * Return: the length of h
 */
size_t list_len(const list_t *h)
{
	list_t *p = (list_t *)h;
	size_t length = 0;

	while (p)
	{
		length++;
		p = p->next;
	}
	return (length);
}
