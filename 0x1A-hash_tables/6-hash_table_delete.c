#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - delete
 * @ht: the hash table to print
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node = NULL;
hash_node_t *temp_node = NULL;
if (!ht)
{
return;
}
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
temp_node = node;
free(node->key);
free(node->value);
free(node);
node = temp_node->next;
}
ht->array[i] = NULL;
}
free(ht->array);
free(ht);
}
