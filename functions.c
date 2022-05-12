#include "monty.h"

/**
 * push - adds new node at the beginning
 * @head: pointer to head node
 * @n: data to enter in node
 *
 * Return: void
 */

void push(stack_t **head, unsigned int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit_prep(*head, NULL, NULL);
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	if (new == NULL)
	{
		/*return (NULL);*/
	}

}

/**
 * pall - prints all nodes
 * @head: pointer to heda node
 * @n: unused
 *
 * Return: void
 */

void pall(stack_t **head, __attribute__((unused)) unsigned int n)
{
	int count;
	stack_t *tmp = *head;

	if (head == NULL)
	{
		/*return ('\0');*/
	}

	for (count = 0; tmp != NULL; count++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
