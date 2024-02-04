#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - hash_table_create
 * @key: const unsigned char
 * @ht :hash table
 * @value : char
 * Return: hashTablePointer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

    unsigned long int hash_value;
    hash_node_t *new_node;
    int index;
    if (key == NULL || strlen(key) == 0)
    {
        return 0;
    }

    hash_value = hash_djb2((const unsigned  char *)key);
    index = hash_value % ht->size;

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        return 0;
    }
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
