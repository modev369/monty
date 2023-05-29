#include "monty.h"


/**
 * f_swap - adds first two elements
 * @head: stack start
 * @counter: line_number
 * Return: nothing
*/


void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *zaza;
	int len = 0, auxhelp;

	zaza = *head;
	while (zaza)
	{
		zaza = zaza->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	zaza = *head;
	auxhelp = zaza->n;
	zaza->n = zaza->next->n;


	zaza->next->n = auxhelp;
}
