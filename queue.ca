#include "monty.h"


/**
 * f_queue - prints top
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to end of stack
 * @n: new_value
 * @head: head
 * Return: nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *n_node, *auxhelp;

	auxhelp = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (auxhelp)
	{
		while (auxhelp->next)
			auxhelp = auxhelp->next;
	}
	if (!auxhelp)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		auxhelp->next = n_node;
		n_node->prev = auxhelp;
	}
}
