#include "lists.h"
/**
*sum_dlistint - program
*Return:0
*@head:parameter
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
