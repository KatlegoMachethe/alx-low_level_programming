#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly liked lists
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next mode
 *
 * Description: singly list list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * Function prototypes
 */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
int _strlen(const char *s);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**
 * _strlen - lenght of a string
 * @s: string to get length of
 *
 * Return: length of s
 */

int _strlen(const char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

#endif
