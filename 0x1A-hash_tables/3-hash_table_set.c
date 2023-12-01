#include "hash_tables.h"


/**
*make_hashnode - program
*Return:0
*@key:parameter
*@value:argument
*/
hash_node_t *make_hashnode(const char *key, const char *value)
{
hash_node_t *node;
node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (NULL);
node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (NULL);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (NULL);
}
node->next = NULL;
return (node);
}
/**
*hash_table_set - program
*Return:0
*@ht:parameter
*@key:argument
*@value:argument
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *hashnode, *tmp;
char *new_value;
if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL
|| strlen(key) == 0 || value == NULL)
return (0);
index = key_index((unsigned const char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);
free(tmp->value);
tmp->value = new_value;
return (1);
}
tmp = tmp->next;
}
hashnode = make_hashnode(key, value);
if (hashnode == NULL)
return (0);
hashnode->next = ht->array[index];
ht->array[index] = hashnode;
return (1);
}

