#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 *@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_pstr(stack_t **arch, unsigned int tallys)
{
	stack_t *ar;
	(void)tallys;

	ar = *arch;
	while (ar)
	{
		if (ar->n > 127 || ar->n <= 0)
		{
			break;
		}
		printf("%c", ar->n);
		ar = ar->next;
	}
	printf("\n");
}
