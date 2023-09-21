#include "list.h"
/**
*_strlen - program
*Return:0
*@s:parameter
*/
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}





/**
*print_list - program
*Return:0
*@h:parameter
*/
size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
printf("[%d]%s\n", _strlen(h->str), h->str ? h->str : "(nill)");
h = h->next;
i++;
}
return (i);
}

