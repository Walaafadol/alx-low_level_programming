#include "lists.h"
/**
*sum_listint - program
*Return:0
*@head:parameter
*/
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
