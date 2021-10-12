/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ordinary_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:46:42 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/04 16:46:49 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_ordinary_str(char **format)
{
	int	i;

	i = 0;
	while ((*format)[i] && (*format)[i] != '%')
	{
		ft_putchar_fd((*format)[i], 1);
		i++;
	}
	*format += i;
	return (i);
}
