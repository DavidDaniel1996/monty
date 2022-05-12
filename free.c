#include "monty.h"

/**
 * free_list - frees list
 * @head: pointer to head node
 *
 * Return: void
 */

void free_list(stack_t *head)
{
	stack_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
