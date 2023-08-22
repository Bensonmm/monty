#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 **@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_mul(stack_t **arch, unsigned int tallys)
{
	stack_t *ar;
	int len = 0, aux;

	ar = *arch;
	while (ar)
	{
		ar = ar->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", tallys);
		fclose(bus.file);
		free(bus.content);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	ar = *arch;
	aux = ar->next->n * ar->n;
	ar->next->n = aux;
	*arch = ar->next;
	free(ar);
}
