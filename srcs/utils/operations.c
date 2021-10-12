#include "push_swap.h"

void	swap_stack(t_list **stack)
{
	t_list	*item;

	item = ft_lstpop(stack);
	*stack = (*stack)->next;
	ft_lstadd_front(stack, item);
	*stack = (*stack)->prev;
}

void	push_stack(t_list **src, t_list **dst)
{
	ft_lstadd_front(dst, ft_lstpop(src));
}

void	rotate_stack(t_list **stack)
{
	*stack = (*stack)->next;
}

void	reverse_rotate_stack(t_list **stack)
{
	*stack = (*stack)->prev;
}

void	op(t_ops operation, t_stacks *stacks, bool print)
{
	if (print)
		print_op(operation);
	if (operation == SA || operation == SS)
		swap_stack(&stacks->a);
	if (operation == SB || operation == SS)
		swap_stack(&stacks->b);
	if (operation == PA)
		push_stack(&stacks->b, &stacks->a);
	if (operation == PB)
		push_stack(&stacks->a, &stacks->b);
	if (operation == RA || operation == RR)
		rotate_stack(&stacks->a);
	if (operation == RB || operation == RR)
		rotate_stack(&stacks->b);
	if (operation == RRA || operation == RRR)
		reverse_rotate_stack(&stacks->a);
	if (operation == RRB || operation == RRR)
		reverse_rotate_stack(&stacks->b);
}
