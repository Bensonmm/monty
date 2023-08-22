#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *arch)
{
	stack_t *aux;

	aux = arch;
	while (arch)
	{
		aux = arch->next;
		free(arch);
		arch = aux;
	}
}
