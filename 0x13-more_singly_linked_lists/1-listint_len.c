#include "lists.h"


size_t listint_len(const listint_t *h);
{
	listint_t *p = (listint_t *)h;
	size_t size = 0;

	while (p)
	{
		size++;
		p = p->next;
	}
	return (size);
}
