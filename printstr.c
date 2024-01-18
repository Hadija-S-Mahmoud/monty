#include "monty.h"

/**
 * f_pstr - function that prints a string starting, top of the stack,
 * then a new line
 * @head: head of the stack
 * @counter: number line
 * Return: nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
