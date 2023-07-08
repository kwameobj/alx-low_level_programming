#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: the hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned int i;

	if (size == 0)
	return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeds else 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int position;
	shash_node_t *checker, *new;

	if (!ht || strlen(key) == 0)
		return (0);
	position = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[position];
	while (checker)
	{
		if (!strcmp(checker->key, key))
		{
			free(checker->value);
			checker->value = strdup((char *)value);
			if (!checker->value)
				return (0);
			return (1);
		}
		checker = checker->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup((char *)value);
	if (!new->value)
	{
		free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[position];
	ht->array[position] = new;
	new->snext = NULL;
	new->sprev = NULL;
	return (set_sorted_list(ht, new));
}
/**
 * set_sorted_list - sets doubly linked list
 * @ht: hash table to go through
 * @new: node to sort
 * Return: pass or fail
 */

int set_sorted_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *sorter;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	if (strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return (1);
	}
	else
	{
		sorter = ht->shead->snext;
		while (sorter && strcmp(new->key, sorter->key) > 0)
			sorter = sorter->snext;
		if (!sorter)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return (1);
		}
		new->sprev = sorter->sprev;
		sorter->sprev->snext = new;
		sorter->sprev = new;
		new->snext = sorter;
	}
	return (1);
}
/**
 * shash_table_get - returns value of key
 * @ht: hash table
 * @key: key to return value
 * Return: string value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int position;
	shash_node_t *checker;

	if (!ht || strlen(key) == 0)
		return (NULL);
	position = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[position];
	while (checker)
	{
		if (!strcmp(checker->key, key))
			return (checker->value);
		checker = checker->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints shash table
 * @ht: hash table to print
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *header;

	if (!ht)
		return;

	header = ht->shead;
	printf("{");
	while (header)
	{
		printf("'%s': '%s'", header->key, header->value);
		if (header != ht->stail)
			printf(", ");
		header = header->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints table reversed
 * @ht: hash table to print
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tailer;

	if (!ht)
		return;
	tailer = ht->stail;
	printf("{");
	while (tailer)
	{
		printf("'%s': '%s'", tailer->key, tailer->value);
		if (tailer != ht->shead)
			printf(", ");
		tailer = tailer->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a table
 * @ht: hash table to delete
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned int i;
	shash_node_t *freer, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		freer = ht->array[i];
		while (freer)
		{
			tmp = freer->next;
			free(freer->key);
			free(freer->value);
			free(freer);
			freer = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
