#include "monty.h"
/**
 * f_queue - prints the top
 *@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_queue(stack_t **arch, unsigned int tallys)
{
	(void)arch;
	(void)tallys;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @arch: head of the stack
 * Return: no return
*/
void addqueue(stack_t **arch, int n)
{
	stack_t *new_node, *aux;

	aux = *arch;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*arch = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
