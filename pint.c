#include "monty.h"
/**
 * f_pint - prints the top
 *@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_pint(stack_t **arch, unsigned int tallys)
{
	if (*arch == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", tallys);
		fclose(bus.file);
		free(bus.compose);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*arch)->n);
}
