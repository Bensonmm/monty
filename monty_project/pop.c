#include "monty.h"
/**
 * f_pop - prints the top
 *@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_pop(stack_t **arch, unsigned int tallys)
{
	stack_t *ar;

	if (*arch == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", tallys);
		fclose(bus.file);
		free(bus.content);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	ar = *arch;
	*arch = ar->next;
	free(ar);
}