#include "lists.h"

/**
 * add_node_end - code
 * @head: pointer
 * @str: String
 * Return: y
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *x, *y;
    char *bck;

    bck = strdup(str);
    if (bck == NULL)
        return (NULL);
    x = *head;
    while (x && x->next)
        x = x->next;
    y = (list_t *)malloc(sizeof(list_t));
    if (y == NULL)
        return (NULL);
    if (x == NULL)
    {
        x = y;
        *head = y;
    }
    x->next = y;
    y->len = strlen(str);
    y->str = bck;
    y->next = NULL;
    return (y);
}
