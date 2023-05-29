#include "monty.h"


/**
  *f_rotr- rotates the stack
  *@head: stack start point
  *@counter: line_number
  *Return: nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpystack;

	cpystack = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpystack->next)
	{
		cpystack = cpystack->next;
	}
	cpystack->next = *head;
	cpystack->prev->next = NULL;


	cpystack->prev = NULL;
	(*head)->prev = cpystack;
	(*head) = cpystack;
}
