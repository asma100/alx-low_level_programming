#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash_table_create
 * @tableSize: unsigned long int
 * Return: hashTablePointer
 */
hash_table_t *hash_table_create(unsigned long int tableSize)
{
hash_table_t *hashTablePointer = NULL;
hash_node_t **arrayPointer = NULL;
unsigned long int index;


hashTablePointer = malloc(sizeof(hash_table_t));
if (!hashTablePointer) {
return NULL;
}


arrayPointer = malloc(sizeof(hash_node_t *) * tableSize);
if (!arrayPointer) {
free(hashTablePointer);
return NULL;
}


for (index = 0; index < tableSize; index++) {
arrayPointer[index] = NULL;
}

hashTablePointer->size = tableSize;
hashTablePointer->array = arrayPointer;
return hashTablePointer;
}
