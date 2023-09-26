#include "lists.h"
/**
*find_loop - program
*Return:0
*@head:parameter
*/

listint_t *find_loop(listint_t *head)
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


/**
*free_listint_safe - program
*Return:0
*@h:parameter
*/
size_t free_listint_safe(listint_t **h)
{
size_t len;
listint_t *next, *loopnode;
int loop = 1;
if (!h || !*h)
return (0);
loopnode = find_loop(*h);
for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
{
len++;
next = (*h)->next;
if (*h == loopnode && loop)
{
if (loopnode == loopnode->next)
{
free(*h);
break;
}
len++;
next = next->next;
free((*h)->next);
loop = 0;
}
free(*h);
}
*h = NULL;
return (len);
}
