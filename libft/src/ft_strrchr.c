/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:46:14 by trcottam          #+#    #+#             */
/*   Updated: 2020/02/07 15:40:34 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (!c)
		return ((char *)s + str_len);
	i = 0;
	while (i < str_len)
	{
		if (s[str_len - i - 1] == c)
			return ((char *)s + str_len - i - 1);
		i++;
	}
	return (NULL);
}
