#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@arch: stack arch
  *@tallys: line_number
  *Return: no return
 */
void f_rotl(stack_t **arch,  __attribute__((unused)) unsigned int tallys)
{
	stack_t *tmp = *arch, *aux;

	if (*arch == NULL || (*arch)->next == NULL)
	{
		return;
	}
	aux = (*arch)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *arch;
	(*arch)->next = NULL;
	(*arch)->prev = tmp;
	(*arch) = aux;
}