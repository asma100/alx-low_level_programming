#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - hash_table_create
 * @key: const unsigned char
 * @hthash_table_t
 * @value
 * Return: hashTablePointer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node = NULL;
hash_node_t **array_ptr = NULL;
unsigned long int index;
if (!key || !value || !ht)
{
return 0;
}
if (!strcmp(key, ""))
{
return 0;
}

index = key_index((unsigned char *)key, ht->size);
array_ptr = ht->array + index;
/* Check if the key already exists */
while (*array_ptr)
{
if (!strcmp((*array_ptr)->key, key))
{
return 0;
}
array_ptr = &(*array_ptr)->next;
}
/* Allocate memory for the new node */
new_node = malloc(sizeof(hash_node_t));
if (!new_node) {
return 0;
 }
 /* Copy the key and value strings */
new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return
 
0;
}

new_node->value = strdup(value);
if (!new_node->value)
{
free(new_node->key);
free(new_node);
return 0;
}
/* Add the new node to the beginning of the linked list */
new_node->next = *array_ptr;
*array_ptr = new_node;
return 1;
}
