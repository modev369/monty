#include "monty.h"


/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/


void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, auxhelp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxhelp = h->next->n / h->n;
	h->next->n = auxhelp;
	*head = h->next;

	free(h);
}
