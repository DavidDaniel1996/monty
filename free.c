#include "monty.h"

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