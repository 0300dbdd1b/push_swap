

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}				t_stack;


typedef struct s_stacks
{
	t_stack	*a;
	t_stack	*b;
}	            t_stacks;



t_stacks	sa(t_stacks stacks);
t_stacks	sb(t_stacks stacks);
t_stacks	ss(t_stacks stacks);
t_stacks	pa(t_stacks stacks);
t_stacks	pb(t_stacks stacks);
t_stacks	ra(t_stacks stacks);
t_stacks	rb(t_stacks stacks);
t_stacks	rr(t_stacks stacks);
t_stacks	rra(t_stacks stacks);
t_stacks	rrb(t_stacks stacks);
t_stacks	rrr(t_stacks stacks);