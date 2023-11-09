#include "lists.h"
/**
*dlistint_len - program
*Return:0
*@h:parameter
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
