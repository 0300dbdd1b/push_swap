#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include "libft.h"
# include <stdbool.h>

typedef enum e_ops {
	SA = 1,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
}	t_ops;

typedef struct s_stacks {
	t_list			*a;
	t_list			*b;
	unsigned int	size;
	unsigned int	init_match_cnt;
}	t_stacks;

typedef struct s_move {
	int				rot_both;
	int				rot_a;
	int				rot_b;
	t_ops	action;
	int				match_cnt;
	unsigned int	instrn_cnt;
}	t_move;

bool	args_to_stacks(char *argv[], t_stacks *stacks, int argc);
void	instr(t_instr instr, t_stacks *stacks, bool print);
void	print_instr(t_instr instr);
void	init_stacks(t_stacks *stacks);
void	sort_stacks(t_stacks *stacks);
bool	are_consec(t_list *first, t_list *second, unsigned int size);
int		get_rot_pos(t_list *stack, unsigned int val);
int		get_rot_neg(t_list *stack, unsigned int val);
int		get_rot(t_list *stack, unsigned int val);

unsigned int get_val(t_list *lst, int index);
void 	sort_5(t_stacks *stacks);
void	rot_final(t_stacks *stacks);

bool	ft_strisint(char *str);

#endif
