#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *insert_node - inserts a node into a sorted list
 *@head: the head of the linked list
 *@number: the number data of the new node
 *
 *Return: the address of the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new, *old;
	old = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;

	if (!(*head) || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (old->next != NULL)
	{
		if (old->next->n > number)
		{
			new->next = old->next;
			old->next = new;
			return (new);
		}
		old = old->next;
	}
	new->next = old->next;
	old->next = new;
	return (new);
}
