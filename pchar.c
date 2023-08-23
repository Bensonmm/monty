#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 **@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_pchar(stack_t **arch, unsigned int tallys)
{
	stack_t *ar;

	ar = *arch;
	if (!ar)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", tallys);
		fclose(bus.file);
		free(bus.compose);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	if (ar->n > 127 || ar->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", tallys);
		fclose(bus.file);
		free(bus.compose);
		free_stack(*arch);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ar->n);
}
