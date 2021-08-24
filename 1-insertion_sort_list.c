#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * 
 * @list: doubly linked list of integers
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *frnt, *nxt, *new, *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    nxt = *list;
    frnt = *list->next;

    while (frnt != NULL)
    {
        new = frnt->next;
        if (frnt->n < nxt->n)
        {
            if (nxt->prev != NULL)
                nxt->prev->next = frnt;
            else
                *list = frnt;
            if (frnt->next != NULL)
                frnt->next->prev = nxt;
            tmp = frnt->next;
            frnt->next = nxt;
            frnt->prev = nxt->prev;
            nxt->next = tmp;
            nxt->prev = frnt;
            print_list(*list);
            nxt = load->prev;
        }

        frnt = new;
        if (frnt)
            nxt = frnt->prev;
    }
}
