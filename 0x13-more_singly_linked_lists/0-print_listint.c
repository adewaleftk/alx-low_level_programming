#include "lists.h"

size_t print_listint(const listint_t *h)
{
	listint_t *p = (listint_t *)h;
	size_t size = 0;

	while (p)
	{
		printf("%d\n", p->n);
		size++;
	}
	return (size);
}
