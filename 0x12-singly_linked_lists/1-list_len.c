#include "lists.h"
/**
*list_len - program
*Return:0
*@h:parameter
*/
size_t list_len(const list_t *h)
{
size_t i = 0;
while (h)
{
h =  h->next;
i++;
}
return (i);
}
