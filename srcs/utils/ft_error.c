#include "push_swap.h"

void	ft_error(t_stacks *stacks)
{
	ft_putstr("Error\n");
	ft_lstclear(&stacks->a, &free);
	ft_lstclear(&stacks->b, &free);
	// Find a way to handle freeing the stacks
	exit(1);
}