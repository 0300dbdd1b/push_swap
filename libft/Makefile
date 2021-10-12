# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/09 13:54:47 by trcottam          #+#    #+#              #
#    Updated: 2021/09/15 17:59:45 by trcottam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_DIR = src
OBJ_DIR = obj

CC = gcc
AR = ar rc
MKDIR = mkdir -p
RM = rm -fr

CFLAGS = -Wall -Werror -Wextra -I.

OBJ = $(SRC:%=$(OBJ_DIR)/%.o)

SRC =	ft_memset.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_abs.c\
		ft_islower.c\
		ft_isupper.c\
		ft_strstr.c\
		ft_strcpy.c\
		ft_strcat.c\
		ft_strcomb.c\
		ft_strprepend.c\
		ft_strappend.c\
		ft_strpad.c\
		ft_chartostr.c\
		ft_uimaxtobase.c\
		ft_imaxtobase.c\
		ft_strpbrk.c\
		ft_strtok.c\
		ft_strcmp.c\
		ft_max_int.c\
		ft_min_int.c\
		ft_strisint.c\
		ft_lstnew_circ.c\
		ft_lstget.c\
		ft_lstpop.c\
		\
		ft_printf.c\
		ft_printf/print_ordinary_str.c\
		ft_printf/process_format.c\
		ft_printf/print_conv.c\
		ft_printf/len_to_arg.c\
		ft_printf/print_null_char_conv.c\
		ft_printf/format_to_conv.c\
		ft_printf/convert_arg.c\
		ft_printf/init_conv.c\
		ft_printf/process_flags.c\
		ft_printf/process_width.c\
		ft_printf/process_precision.c\
		ft_printf/process_len.c\
		ft_printf/process_spec.c\
		ft_printf/arg_to_conv.c\
		ft_printf/int_arg_to_conv.c\
		ft_printf/double_arg_to_conv.c\
		ft_printf/char_arg_to_conv.c\
		ft_printf/str_arg_to_conv.c\
		ft_printf/apply_precision_padding.c\
		ft_printf/apply_zero_padding.c\
		ft_printf/apply_prefix.c\
		ft_printf/apply_sign.c\
		ft_printf/apply_space_padding.c\
		ft_printf/apply_uppercase.c\
		ft_printf/conv_has_sign.c\
		ft_printf/get_conv_base.c\
		ft_printf/conv_is_unsigned.c\
		ft_printf/conv_is_int.c\
		ft_printf/conv_is_double.c\
		ft_printf/get_prefix_len.c\
		ft_printf/int_arg_to_conv_var.c\
		ft_printf/init_double_s.c\
		ft_printf/get_double_conv_precision.c\
		ft_printf/get_double_parts.c\
		ft_printf/get_sci_double_s.c\
		ft_printf/conv_to_double_s.c\
		ft_printf/double_int_part_to_conv.c\
		ft_printf/append_double_dec_sep.c\
		ft_printf/append_double_dec_part.c\
		ft_printf/append_double_sci_suffix.c\

.PHONY:	all clean fclean re

.SECONDEXPANSION:

all:	$(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ_DIR)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

%/:
	$(MKDIR) $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/% | $$(dir $(OBJ_DIR)/%)
	$(CC) $(CFLAGS) -c -o $@ $<
