#include "monty.h"
/*
 * f_div - divides the top two elements of the stack.
*@arch: stack arch
  *@tallys: line_number
 * Return: no return
 */

void f_div(stack_t **arch,unsigned int tallys)
{
	stack_t *ar;
	int len = 0' aux;

	ar = *arch;
	while (ar)
	{
		ar = ar->next;
		len++;
	}

	if (len < 2)
	{       
	fprintf(stderr, "L%d: can not div, stack too short\n", tallys);
			fclose(bus.file);
			free(bus.content);
			free_stack(*arch);
			exit(EXIT_FAILURE);
			}

	ar = *arch;
        if (ar-> == 0)
        {
        fprintf(stderr, "L%d: divisin by zero, stack too short\n", tallys);
                        fclose(bus.file);
                        free(bus.content);
                        free_stack(*arch);
                        exit(EXIT_FAILURE);
                        }
			aux = ar->n / ar->n;
			ar->next-> = aux;
			*arch = ar->next;
			free(ar);
}
