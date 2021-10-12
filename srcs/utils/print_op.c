#include "push_swap.h"

void	print_op(t_ops operation)
{
	char	*operations[12];

	operations[SA] = "sa";
	operations[SB] = "sb";
	operations[SS] = "ss";
	operations[PA] = "pa";
	operations[PB] = "pb";
	operations[RA] = "ra";
	operations[RB] = "rb";
	operations[RR] = "rr";
	operations[RRA] = "rra";
	operations[RRB] = "rrb";
	operations[RRR] = "rrr";
	ft_putstr(operations[operation]);
	write(1, "\n", 1);
}
