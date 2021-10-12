/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:34:32 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 17:36:25 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_postoi(const char *str, int len)
{
	long	ten_count;
	long	n;

	if (len == 0)
		return (0);
	ten_count = ft_postoi(str, len - 1);
	if (ten_count == -1)
		return (-1);
	n = (10 * ten_count) + (str[len - 1] - '0');
	if (n > (long)INT_MAX + 1)
		return (-1);
	return (n);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		is_pos;
	long	n;
	int		n_len;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	is_pos = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_pos = 0;
		i++;
	}
	n_len = 0;
	while (ft_isdigit(str[i + n_len]))
		n_len++;
	n = ft_postoi(str + i, n_len);
	if (n == -1 || (is_pos && n == (long)INT_MAX + 1))
		return (-is_pos);
	if (is_pos)
		return (n);
	else
		return (-n);
}
