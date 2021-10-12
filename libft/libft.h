/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:57:58 by trcottam          #+#    #+#             */
/*   Updated: 2021/09/15 17:59:58 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

# define BUFFER_SIZE 4096

typedef struct s_list
{
	void			*data;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strnstr(
						const char *haystack,
						const char *needle,
						size_t len);
int					ft_atoi(const char *str);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);

char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *item);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *item);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(
						t_list *lst,
						void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew_circ(void *content);
t_list				*ft_lstget(t_list *lst, int i);
t_list				*ft_lstpop(t_list **lst);

int					ft_abs(int j);
int					ft_islower(int c);
int					ft_isupper(int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strcat(char *dest, const char *str);
char				*ft_strcomb(const char *s1, const char *s2);
char				*ft_strprepend(char **str, const char *prefix);
char				*ft_strappend(char **str, const char *suffix);
char				*ft_strpad(char **str, char c, size_t len, bool end);
char				*ft_chartostr(char c);
char				*ft_uimaxtobase(uintmax_t n, unsigned int base);
char				*ft_imaxtobase(intmax_t n, unsigned int base);

char				*ft_strpbrk(const char *s, const char *accept);
char				*ft_strtok(char *str, const char *delim);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_max_int(int i1, int i2);
int					ft_min_int(int i1, int i2);
bool				ft_strisint(char *str);

// ft_printf

# define HEX_PREFIX "0x"

typedef union u_var {
	uintmax_t	i;
	double		d;
	char		c;
	char		*s;
}	t_var;

typedef enum e_spec {
	SPEC_SDEC = 'd',
	SPEC_UDEC = 'u',
	SPEC_UHEX = 'x',
	SPEC_DSCI = 'e',
	SPEC_DDEC = 'f',
	SPEC_DAUTO = 'g',
	SPEC_CHAR = 'c',
	SPEC_STR = 's',
	SPEC_PTR = 'p',
	SPEC_LEN = 'n',
	SPEC_PERCENT = '%',
}	t_spec;

typedef enum e_len {
	LEN_CHAR = 1,
	LEN_SHORT,
	LEN_LONG,
	LEN_LLONG,
}	t_len;

typedef struct s_double_parts {
	uintmax_t	i;
	uintmax_t	d;
}	t_double_parts;

typedef struct s_double{
	t_double_parts	parts;
	size_t			dec_part_len;
	bool			sci;
	int				exp;
}	t_double;

typedef struct s_conv {
	t_spec		spec;
	t_var		var;
	char		*str;
	t_len		len;
	int			width;
	int			precision;
	bool		negative;
	bool		uppercase;
	bool		alt;
	bool		zero;
	bool		left;
	bool		space;
	bool		sign;
	bool		null_char;
}				t_conv;

int					ft_printf(const char *format, ...);
int					print_ordinary_str(char **format);
int					process_format(char *format, va_list *args);
int					print_conv(char **format, va_list *args, int written_len);
void				len_to_arg(int written_len, va_list *args, t_conv *conv);
void				print_null_char_conv(t_conv *conv);
t_conv				format_to_conv(char **format, va_list *args);
void				init_conv(t_conv *conv);
void				convert_arg(t_conv *conv, va_list *args);

void				process_flags(char **format, t_conv *conv);
void				process_width(char **format, va_list *args, t_conv *conv);
void				process_precision(char **format, va_list *args,
						t_conv *conv);
void				process_len(char **format, t_conv *conv);
void				process_spec(char **format, t_conv *conv);

void				arg_to_conv(va_list *args, t_conv *conv);
void				int_arg_to_conv(va_list *args, t_conv *conv);
void				double_arg_to_conv(va_list *args, t_conv *conv);
void				char_arg_to_conv(va_list *args, t_conv *conv);
void				str_arg_to_conv(va_list *args, t_conv *conv);

void				apply_precision_padding(t_conv *conv);
void				apply_zero_padding(t_conv *conv);
void				apply_prefix(t_conv *conv);
void				apply_sign(t_conv *conv);
void				apply_space_padding(t_conv *conv);
void				apply_uppercase(t_conv *conv);

bool				conv_has_sign(t_conv *conv);
bool				conv_is_int(t_conv *conv);
bool				conv_is_unsigned(t_conv *conv);
bool				conv_is_double(t_conv *conv);

unsigned int		get_conv_base(t_conv *conv);
size_t				get_prefix_len(char *str, t_conv *conv);
void				int_arg_to_conv_var(va_list *args, t_conv *conv);
int					get_double_sci_power(double d, int precision);

void				init_double_s(t_double *ds);
int					get_double_conv_precision(t_conv *conv);
t_double_parts		get_double_parts(double d, int dec_part_len);
void				get_sci_double_s(double d, t_double *ds);
t_double			conv_to_double_s(t_conv *conv);
bool				double_int_part_to_conv(t_conv *conv, t_double *ds);
bool				append_double_dec_sep(t_conv *conv, t_double *ds);
bool				append_double_dec_part(t_conv *conv, t_double *ds);
bool				append_double_sci_suffix(t_conv *conv, t_double *ds);

#endif
