#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include "hash_tables.h"
/**                                                                                                                                                                     
 * hash_table_get - retrieves a value associated with a key                                                                                                             
 * @ht: hash table to look into                                                                                                                                         
 * @key: key to look for                                                                                                                                                
 *                                                                                                                                                                      
 * Return: value associated with the element, or NULL if key couldn't be found                                                                                          
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current;
int index;
unsigned long int hash_value;
if (ht == NULL || key == NULL || strlen(key) == 0)
{
return NULL;
}

hash_value = hash_djb2((const unsigned char *)key);
index = hash_value % ht->size;
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return current->value;
}
current = current->next;
}
return NULL;
}
