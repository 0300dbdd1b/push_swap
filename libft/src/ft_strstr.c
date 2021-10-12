/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 19:18:38 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 18:11:31 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*haystack_copy;
	size_t	i;
	size_t	needle_len;

	haystack_copy = (char *)haystack;
	if (!needle[0])
		return (haystack_copy);
	needle_len = ft_strlen(needle);
	while (*haystack_copy)
	{
		i = 0;
		while (haystack_copy[i] == needle[i] && needle[i])
			i++;
		if (i == needle_len)
			return (haystack_copy);
		haystack_copy++;
	}
	return (NULL);
}
