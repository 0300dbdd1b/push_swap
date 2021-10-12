
#include "libft.h"

bool	ft_strisint(char *str)
{
	bool	neg;
	char	*tmp_itoa;

	if (*str == '-')
		neg = true;
	if (ft_strchr("-+", *str))
		str++;
	while (*str == '0')
		str++;
	if (!*str)
		return (true);
	tmp_itoa = ft_itoa(ft_atoi(str));
	if (ft_strcmp(str, tmp_itoa)
			&& !(!ft_strcmp(str, "2147483648") && neg))
	{
		free(tmp_itoa);
		return (false);
	}
	free(tmp_itoa);
	while (ft_isdigit(*str))
		str++;
	return (!*str);
}
