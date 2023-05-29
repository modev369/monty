#include "monty.h"


/**
 * f_pstr - prints the string
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *zaza;
	(void)counter;

	zaza = *head;
	while (zaza)
	{
		if (zaza->n > 127 || zaza->n <= 0)
		{
			break;
		}
		printf("%c", zaza->n);
		zaza = zaza->next;
	}
	printf("\n");
}
