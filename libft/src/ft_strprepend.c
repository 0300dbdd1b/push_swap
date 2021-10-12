/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strprepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:46:34 by trcottam          #+#    #+#             */
/*   Updated: 2020/12/14 18:19:03 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strprepend(char **str, const char *prefix)
{
	char	*old_str;

	old_str = *str;
	*str = ft_strcomb(prefix, *str);
	free(old_str);
	return (*str);
}
