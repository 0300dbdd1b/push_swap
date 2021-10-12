/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:11:39 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 18:40:32 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i + dst_len + 1 < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (size > dst_len)
		dst[dst_len + i] = '\0';
	return (src_len + ft_min_int(size, dst_len));
}
