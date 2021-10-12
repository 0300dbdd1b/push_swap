/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_space_padding.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 14:07:57 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/09 15:40:49 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	apply_space_padding(t_conv *conv)
{
	ft_strpad(&conv->str, ' ', conv->width, conv->left);
}
