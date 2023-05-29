#include "monty.h"


/**
 * f_pall - prints a stack
 * @head: stack head
 * @counter: not used
 * Return: nothing
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *z;
	(void)counter;

	z = *head;
	if (z == NULL)
		return;
	while (z)
	{
		printf("%d\n", z->n);
		z = z->next;
	}
}
