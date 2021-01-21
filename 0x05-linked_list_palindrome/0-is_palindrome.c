#include "lists.h"
#include <stdlib.h>
/**
 * is_palindrome - checks if a list is palindrome
 * @head: head node
 * Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *adv = *head;
	int len = 0, i = 0;
	int s[5000];

	if (!adv)
		return (1);
	while(adv)
	{
		adv = adv->next;
		len++;
	}
	adv = *head;
	if (s == NULL)
		return (0);
	while (adv)
	{
		s[i] = adv->n;
		adv = adv->next;
		i++;
	}
	i = 0;
	for (; i < (len / 2); i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
