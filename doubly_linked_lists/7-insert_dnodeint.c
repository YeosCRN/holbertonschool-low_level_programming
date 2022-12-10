#include "lists.h"

/**
 * insert_dnodeint_at_index - code
 * @h: pointer
 * @idx: var
 * @n: var
 * Return: new, NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_nod;

	new_nod = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	tmp = *h;
	if (!tmp)
	{
		new_nod->prev = NULL;
		new_nod->next = NULL;
		*h = new_nod;
		return (new_nod);
	}
	if (idx == 0)
	{
		new_nod->prev = NULL;
		new_nod->next = tmp;
		tmp->prev = new_nod;
		*h = new_nod;
		return (new_nod);
	}
	while (idx > 1 && tmp->next)
	{
		tmp = tmp->next;
		idx -= 1;
	}
	if (idx > 1 && !tmp->next)
		return (NULL);
	new_nod->prev = tmp;
	new_nod->next = tmp->next ? tmp->next : NULL;
	if (tmp->next)
		tmp->next->prev = new_nod;
	tmp->next = tmp->next && idx > 1 ? NULL : new_nod;
	return (new_nod);
}
