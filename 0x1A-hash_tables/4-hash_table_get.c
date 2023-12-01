#include "hash_tables.h"

/**
*hash_table_get - program
*Return:0
*@ht:parameter
*@key:argument
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;
if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
|| strlen(key) == 0 || value == NULL)
return (0);
index = key_index((unsigned const char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}
return (NULL);
}
