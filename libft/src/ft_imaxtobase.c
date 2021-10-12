/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imaxtobase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:23:26 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 17:40:42 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_imaxtobase(intmax_t n, unsigned int base)
{
	char	*abs;

	if (n >= 0)
		abs = ft_uimaxtobase(n, base);
	else
		abs = ft_uimaxtobase(-n, base);
	if (!abs || n > 0)
		return (abs);
	return (ft_strprepend(&abs, "-"));
}
