#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash_table_create
 * @size:unsigned long int
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    hash_node_t **array = NULL;
    unsigned long int i;
    /* Allocate memory for the hash table structure */
    ht = malloc(sizeof(hash_table_t));
    if (!ht) {
        return NULL;
    }

    /* Allocate memory for the hash table array */
    array = malloc(sizeof(hash_node_t *) * size);
    if (!array) {
        free(ht);
        return NULL;
    }

    /* Initialize each cell of the hash table array to NULL */
    for (i = 0; i < size; i++) {
        array[i] = NULL;
    }

    /* Set the hash table's size and array */
    ht->size = size;
    ht->array = array;

    return ht;
}
