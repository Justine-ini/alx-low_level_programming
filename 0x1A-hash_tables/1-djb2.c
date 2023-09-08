#include "hash_tables.h"

/**
 * hash_djb2 - hash function to implement djb2 algorithm.
 * @str: pointer to null-terminated byte string to be examined.
 *
 * Return: The new hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	for (; *str; str++)
	{
		c = *str;
		hash = ((hash << 5) + hash) ^ c; /* hash * 33 ^ c */
	}

	return (hash);
}
