#include "lists.h"
/**
*free_listint - program
*Return:0
*@head:parameter
*/
void free_listint(listint_t *head)
{
listint_t  *node;
while (head)
{
node = head;
head = head->next;
free(node);
}
}
