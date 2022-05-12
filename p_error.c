#include "monty.h"

/**
 * p_error - prints appropiate error message
 * @count: line count
 *
 * Return: void
 */

void p_error(int count)
{
	extern int val;

	if (val == -1)
		fprintf(stderr, "L<%d>: usage: push integer\n", count);
	if (val == -2)
		fprintf(stderr, "L<%d>: unknown instruction <opcode>\n", count);
	if (val == -3)
		fprintf(stderr, "Error: malloc failed\n");
	if (val == -4)
		fprintf(stderr, "L<%d>: can't pint, stack empty\n", count);
	if (val == -5)
		fprintf(stderr, "L<%d>: can't pop an empty stack\n", count);
	if (val == -6)
		fprintf(stderr, "L<%d>: can't swap, stack too short\n", count);
}
