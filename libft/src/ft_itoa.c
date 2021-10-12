/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 11:37:27 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 22:07:49 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_itoalen(long n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_itoa_write(long n, char *itoa, size_t itoa_len)
{
	size_t	i;

	if (n == 0)
		itoa[0] = '0';
	else if (n < 0)
	{
		n *= -1;
		itoa[0] = '-';
	}
	i = itoa_len - 1;
	while (n)
	{
		itoa[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	itoa[itoa_len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	itoa_len;
	char	*itoa;
	long	n_long;

	n_long = n;
	itoa_len = ft_itoalen(n_long);
	itoa = malloc(sizeof(char) * (itoa_len + 1));
	if (!itoa)
		return (NULL);
	ft_itoa_write(n_long, itoa, itoa_len);
	return (itoa);
}
