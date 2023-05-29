#include "monty.h"


/**
  *f_rotl- rotates the stack
  *@head: stack start
  *@counter: line_number
  *Return: nothing
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmphelp = *head, *auxhelp;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxhelp = (*head)->next;
	auxhelp->prev = NULL;

	while (tmphelp->next != NULL)
	{
		tmphelp = tmphelp->next;
	}
	tmphelp->next = *head;
	(*head)->next = NULL;


	(*head)->prev = tmphelp;
	(*head) = auxhelp;
}
