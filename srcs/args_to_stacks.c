
#include "push_swap.h"

bool	args_to_arr(char *argv[], unsigned int **arr, int argc)
{
	int	i;

	*arr = malloc(sizeof(unsigned int) * argc);
	if (!*arr)
		return (false);
	i = 0;
	while (argv[i])
	{
		if (!ft_strisint(argv[i]))
			return (false);
		(*arr)[i] = ft_atoi(argv[i]);
		i++;
	}
	return (true);
}

bool	arr_to_stack(unsigned int *arr, t_list **stack, int size)
{
	int				i;
	int				j;
	unsigned int	*index;

	i = 0;
	while (i < size)
	{
		j = 0;
		index = malloc(sizeof(unsigned int));
		if (!index)
			return (false);
		*index = 0;
		while (j < size)
		{
			if (arr[j] < arr[i])
				(*index)++;
			else if (arr[j] == arr[i] && j != i)
				return (false);
			j++;
		}
		ft_lstadd_back(stack, ft_lstnew_circ(index));
		if (ft_lstlast(*stack)->data != index)
			return (false);
		i++;
	}
	return (true);
}

bool	args_to_stacks(char *argv[], t_stacks *stacks, int argc)
{
	unsigned int	*arr;

	stacks->size = argc - 1;
	argv++;
	if (!args_to_arr(argv, &arr, stacks->size)
			|| !arr_to_stack(arr, &stacks->a, stacks->size))
		return (false);
	free(arr);
	return (true);
}
