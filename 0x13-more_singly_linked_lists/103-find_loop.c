#include "lists.h"
/**
*find_listint_loop - program
*Return:0
*@head:parameter
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *pt, *end;
if (head == NULL)
return (NULL);
for (end = head->next; end != NULL; end = end->next)
{
if (end == end->next)
return (end);
for (pt = head; pt != end; pt = pt->next)
if (pt == end->next)
return (end->next);
}
return (NULL);
}
