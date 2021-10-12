/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 23:02:42 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 18:43:09 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpad(char **str, char c, size_t len, bool end)
{
	char	*new_str;
	size_t	str_len;
	size_t	pad_len;
	char	*str_start;
	char	*pad_start;

	str_len = ft_strlen(*str);
	len = ft_max_int(len, str_len);
	pad_len = len - str_len;
	new_str = malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	str_start = new_str;
	pad_start = new_str;
	if (end)
		pad_start += str_len;
	else
		str_start += pad_len;
	ft_strcpy(str_start, *str);
	ft_memset(pad_start, c, pad_len);
	new_str[len] = '\0';
	free(*str);
	*str = new_str;
	return (*str);
}
