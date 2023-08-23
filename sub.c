#include "monty.h"
/**
  *f_sub- sustration
  *@arch: stack arch
  *@tallys: line_number
  *Return: no return
 */
void f_sub(stack_t **arch, unsigned int tallys)
{
	stack_t *aux;
	int sus, nodes;

	aux = *arch;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", tallys);
		fclose(bus.file);
		free(bus.compose);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	aux = *arch;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*arch = aux->next;
	free(aux);
}
