#include "lists.h"
/**
 *check_cycle - check a singly linked list for a cycle in it
 *@list: the list to check
 *
 *Return: 0 if none, 1 if there
 */
int check_cycle(listint_t *list)
{
	listint_t *p = list, *q = list;
	if (!list)
		return (0);
	while(q && q->next)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
			return (1);
	}
	return (0);
}