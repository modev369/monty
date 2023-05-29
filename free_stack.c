#include "monty.h"


/**
* free_stack - free a doubly linked list
* @head: head of stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxhelp;


	auxhelp = head;
	while (head)
	{
		auxhelp = head->next;

		free(head);
		head = auxhelp;
	}
}
