/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:43:30 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 18:18:55 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char **str, const char *suffix)
{
	char	*old_str;

	old_str = *str;
	*str = ft_strcomb(*str, suffix);
	free(old_str);
	return (*str);
}
