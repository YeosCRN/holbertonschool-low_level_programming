#include "lists.h"
/**
 * add_node - code
 * @head: pointer
 * @str: string
 * Return: x
 */
list_t *add_node(list_t **head, const char *str)
{
    char *bck;
    int length;
    list_t *x;

    x = (list_t *)malloc(sizeof(list_t));
    if (x == NULL)
    {
        return (NULL);
    }
    length = strlen(str);
    bck = strdup(str);
    if (bck == NULL)
    {
        free(x);
        return (NULL);
    }
    a->str = bck;
    a->length = length;
    a->next = *head;
    *head = x;
    return (x);
}
