#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: is the key to get the index of.
 * @size: is the size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
