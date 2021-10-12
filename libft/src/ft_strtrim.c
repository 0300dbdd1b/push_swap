/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 20:40:55 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 18:05:28 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (ft_calloc(1, sizeof(char)));
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
		end--;
	trim = malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + start, end - start + 1);
	trim[end - start + 1] = '\0';
	return (trim);
}
