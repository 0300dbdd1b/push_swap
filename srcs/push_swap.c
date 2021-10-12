#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stacks	stacks;

	init_stacks(&stacks);
	if (!args_to_stacks(argv, &stacks, argc))
	{
		write(2, "Error\n", 6);
		ft_lstclear(&stacks.a, &free);
		exit(1);
	}
	if (stacks.size < 2)
		return (0);
	if (stacks.size <= 5)
		sort_5(&stacks);
	rot_final(&stacks);
    //sort_stacks(&stacks);
	ft_lstclear(&stacks.a, &free);
}
