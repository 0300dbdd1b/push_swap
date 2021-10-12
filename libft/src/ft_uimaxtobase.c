/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uimaxtobase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:56:41 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 18:08:33 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_uimaxtobase_len(uintmax_t n, int base)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}

char	*ft_uimaxtobase(uintmax_t n, unsigned int base)
{
	const char	*digits;
	size_t		uimaxtobase_len;
	char		*uimaxtobase;
	size_t		i;

	digits = "0123456789abcdefghijklmnopqrstuvwxyz";
	if (base < 2)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	uimaxtobase_len = ft_uimaxtobase_len(n, base);
	uimaxtobase = malloc(sizeof(char) * uimaxtobase_len + 1);
	if (!uimaxtobase)
		return (NULL);
	uimaxtobase[uimaxtobase_len] = '\0';
	i = uimaxtobase_len - 1;
	while (n)
	{
		uimaxtobase[i] = digits[n % base];
		n /= base;
		i--;
	}
	return (uimaxtobase);
}
