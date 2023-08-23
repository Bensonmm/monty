#include "monty.h"
/**
 * f_push - add node to the stack
 *@arch: stack arch
  *@tallys: line_number
 * Return: no return
*/
void f_push(stack_t **arch, unsigned int tallys)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", tallys);
			fclose(bus.file);
			free(bus.compose);
			free_stack(*arch);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", tallys);
		fclose(bus.file);
		free(bus.compose);
		free_stack(*arch);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(arch, n);
	else
		addqueue(arch, n);
}
