/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:32:03 by trcottam          #+#    #+#             */
/*   Updated: 2021/06/21 22:27:08 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	len;
	size_t	i;

	len = ft_min_int(n, ft_strlen(s1));
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}

static size_t	ft_substrcnt(char const *s, char c)
{
	size_t	i;
	size_t	substr_count;

	substr_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			substr_count++;
		i++;
	}
	return (substr_count);
}

static char	*ft_worddup(const char *str, const char sep)
{
	size_t	substr_len;

	if (ft_strchr(str, sep))
		substr_len = ft_strchr(str, sep) - str;
	else
		substr_len = ft_strlen(str);
	if (!substr_len)
		substr_len = ft_strlen(str);
	return (ft_strndup(str, substr_len));
}

static void	ft_split_free(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	substr_count;
	char	**split;

	split = ft_calloc(ft_substrcnt(s, c) + 1, sizeof(char *));
	if (!s || !split)
		return (NULL);
	substr_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			split[substr_count] = ft_worddup(s + i, c);
			if (!split[substr_count])
			{
				ft_split_free(split);
				return (NULL);
			}
			substr_count++;
		}
		i++;
	}
	return (split);
}
