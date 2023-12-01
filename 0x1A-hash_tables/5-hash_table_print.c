#include "hash_tables.h"
/**
*hash_table_print - program
*Return:0
*@ht:parameter
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *tmp;
char f = 0;
if (ht == NULL || ht->array == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
tmp = ht->array[i];
while (tmp != NULL)
{
if (f == 1)
printf(", ");
printf("'%s' : '%s'", tmp->key, tmp->value);
f = 1;
tmp = tmp->next;
}
}
printf("}\n");
}

