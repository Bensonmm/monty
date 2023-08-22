#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@arch: stack arch
  *@tallys: line_number
  *Return: no return
 */
void f_rotr(stack_t **arch, __attribute__((unused)) unsigned int tallys)
{
	stack_t *copy;

	copy = *arch;
	if (*arch == NULL || (*arch)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *arch;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*arch)->prev = copy;
	(*arch) = copy;
}
