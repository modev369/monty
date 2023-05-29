#include "monty.h"


/**
  *f_sub- sustrate the stack
  *@head: stack start
  *@counter: line_number
  *Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxhelp;
	int susta, nodes;

	auxhelp = *head;
	for (nodes = 0; auxhelp != NULL; nodes++)
		auxhelp = auxhelp->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);

		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxhelp = *head;
	susta = auxhelp->next->n - auxhelp->n;
	auxhelp->next->n = susta;


	*head = auxhelp->next;

	free(auxhelp);
}
