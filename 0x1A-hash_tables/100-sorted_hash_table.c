#include "hash_tables.h"
/**
*shash_table_create - program
*Return:0
*@size:parameter
*/
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int i;
shash_table_t *sht;
sht = malloc(sizeof(shash_table_t ));
if (sht == NULL)
return (NULL);
sht->size = size;
sht->shead = NULL;
sht->stail = NULL;
sht->array = malloc(sizeof(shash_node_t) * size);
if (sht->array == NULL)
{
free(sht);
return (NULL);
}
for (i = 0; i < size; i++)
{
sht->array[i] = NULL;
}
return (sht);
}

/**
*make_shash_node - program
*Return:0
*@key:parameter
*@value:parameter
*/
shash_node_t *make_shash_node(const char *key, const char *value)
{
shash_node_t *shnode;
shnode = malloc(sizeof shash_node_t);
if (shnode == NULL)
return (NULL);
shnode->key = strdup(key);
if (shnode->key == NULL)
{
free(shnode);
return (NULL);
}
shnode->value = strdup(value);
if (shnode->value == NULL)
{
free(shnode->key);
return (NULL);
}
shnode->next = shnode->snext = shnode->sprev = NULL;
return (shnode);
}
/**
*shash_table_set - program
*Return:0
*@ht:parameter
*@key:argument
*@value:argument
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *hashnode, *tmp;
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
hashnode = make_shash_node(key, value);
if (hashnode == NULL)
return (0);
hashnode->next = ht->array[index];
ht->array[index] = hashnode;
add_to_srt_list(ht, hashnode);
return (1);
}

