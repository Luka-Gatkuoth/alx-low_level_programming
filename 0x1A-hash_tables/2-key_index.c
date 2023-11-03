#include "hash_tables.h"

/**
 * key_index - Get the index at which the key/value
 * pairs should be stored in array of the hash table.
 * @key: Key to get the index.
 * @size: Size of the arrays of the hash table.
 *
 * Return: The index of the keys.
 * Description: Use the djb2 algorithms.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
