#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - find index from key
 * @key: const unsigned char
 * @size:unsigned long int
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
int index =  hash_djb2(key);
return (index % size);
}
