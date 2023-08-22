#include "monty.h"
/**
 * addnode - add node to the head stack
 * @arch: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **arch, int n)
{

	stack_t *new_node, *aux;

	aux = *arch;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *arch;
	new_node->prev = NULL;
	*arch = new_node;
}