#include "sort.h"

/**
 * juxtapose - juxtapose two nodes
 *
 * @n1: node;
 *
 * @n2: node;
 *
 * Return: void
 */
void juxtapose(listint_t *n1, listint_t *n2)
{

n2->prev = n1->prev;
if (n2->prev)
n2->prev->next = n2;
n1->prev = n2;
n1->next = n2->next;
if (n1->next)
n1->next->prev = n1;
n2->next = n1;
}

/**
 * insertion_sort_list - Sort doubly linked ints
 *
 * @list: list to sort
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *node, *tmp, *prev;

if (!list)
return;

node = *list;
tmp = node->next;

while (tmp)
{

if (node->n > tmp->n)
{

swap(node, tmp);
if (!tmp->prev)
*list = tmp;
print_list(*list);
prev = tmp->prev;

while (prev && prev->n > tmp->n)
{

swap(prev, tmp);
if (!tmp->prev)
*list = tmp;
print_list(*list);
prev = tmp->prev;
}
}

else
node = tmp;
tmp = node->next;
}
}
