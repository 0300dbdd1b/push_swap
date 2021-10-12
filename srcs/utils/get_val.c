#include "push_swap.h"

unsigned int get_val(t_list *lst, int index)
{
	return (*(unsigned int*) ft_lstget(lst, index)->data);
}