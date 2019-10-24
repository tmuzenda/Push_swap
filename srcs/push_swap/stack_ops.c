#include "push_swap.h"

t_stack		*new_node(int value)
{
	t_stack *node;

	node = (t_stack*)malloc(sizeof(t_stack*));
	node->value = value;
	node->next = NULL;
	return (node);
}

void		push(t_stackdata *stack, int val)
{
	t_stack *top;

	top = new_node(val);
	top->next = stack->lst;
	stack->lst = top;
	stack->size = stack_size(stack);
}

int			peek(t_stack *top)
{
	if (top)
		return (top->value);
	return (MIN_INT);
}
