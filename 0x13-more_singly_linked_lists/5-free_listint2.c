#include "lists.h"

/**
 * free_listint2 - frees list and set heaed to NULL
 * @head:  pointer to the begining of the string
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
