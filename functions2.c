#include "monty.h"

/**
 * swap - swaps first two values of stack
 * @head: pointer to head
 * @n: unused
 *
 * Return: void
 */

void swap(stack_t **head, __attribute__ ((unused)) unsigned int n)
{
	extern int val;

	stack_t *tmp;
	unsigned int num;

	if (*head == NULL || (*head)->next == NULL)
	{
		val = -6;
	}

	else
	{
		tmp = (*head)->next;
		num = tmp->n;
		tmp->n = (*head)->n;
		(*head)->n = num;
	}
}