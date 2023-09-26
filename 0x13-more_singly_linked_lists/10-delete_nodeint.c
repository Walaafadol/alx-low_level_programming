#include "lists.h"
/**
*delete_nodeint_at_index - program
*Return:0
*@head:parameter
*@index:argument
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prevnode, *node;
unsigned int i = 0;
if (!head || !*head)
return (-1);
if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}
node = *head;
while (node)
{
if (i == index)
{
prevnode->next = node->next;
free(node);
return (1);
}
i++;
prevnode = node;
node = node->next;
}
return (-1);
}
