#include <stdio.h>
#include "hash_tables.h"
#include "hash_tables.h"
/**
 * hash_table_print - hash_table_print
 * @ht: hash table to look into
 *
 *
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
long unsigned int i ;
hash_node_t *current;
if (ht == NULL)
{
return;
}

printf("{");
for (i = 0; i < ht->size; i++)
{
current = ht->array[i];
while (current != NULL)
{
printf("'%s': '%s', ", current->key, current->value);
current = current->next;
}
}
printf("}\n");
}
