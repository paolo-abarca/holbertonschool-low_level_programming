#include "hash_tables.h"

/**
 * hash_table_print - that prints a hash table
 *
 * @ht: the hash tables
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			if (j != 0)
				printf(", ");
			j = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}

	}

	printf("}\n");
}
