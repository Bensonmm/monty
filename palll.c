#include "monty.h"
/**
 * f_pall - prints the stack
 * @arch: stack head
 * @tally: no used
 * Return: no return
*/
void f_pall(stack_t **arch, unsigned int tallys)
{
	stack_t *ar;
	(void)tallys;

	ar = *arch;
	if (ar == NULL)
		return;
	while (ar)
	{
		printf("%d\n", ar->n);
		ar = ar->next;
	}
}
