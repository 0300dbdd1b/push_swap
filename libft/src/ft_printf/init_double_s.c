/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_double_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:59:55 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/17 22:04:34 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init_double_s(t_double *ds)
{
	ds->parts.i = 0;
	ds->parts.d = 0;
	ds->dec_part_len = 0;
	ds->sci = false;
	ds->exp = 0;
}
