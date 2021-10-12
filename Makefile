CC=				gcc
CFLAGS=			-Wall -Wextra -Werror

INCLUDES=		-I ./includes/ -I ./libft/includes

BUFFER_SIZE=	16

NAME=			push_swap


SRC_DIR =		./srcs 
SRC_NAME=		./utils/get_val.c 			\
				./utils/init_stacks.c 		\
				./utils/operatioms.c 		\
				./utils/print_op.c 			\
				./str_is_int.c 				\
				./args_to_stack.c 			\
				./push_swap.c 				\


SRCS=			${addprefix ${SRC_DIR}, ${SRC_NAME}}


OBJS=			$(SRCS:.c=.o)

LIBFT_DIR= 		./libft
LIBFT_A=		./libft/libft.a

$(NAME): ${LIBFT_A}  ${OBJS}
	$(CC) $(CFLAGS) -o $(NAME) $(INCLUDES) $(OBJS) $(LIB)


$(LIBFT_DIR):
			git clone --branch normV3 https://github.com/Marcaday/19_libft.git 
			mv ./19_libft/libft .
			rm -rf ./19_libft
			

$(LIBFT_A):		${LIBFT_DIR}
			make -C ./libft	

%.o: %.c
	${CC} -c ${CFLAGS} ${INCLUDES} -D BUFFER_SIZE=${BUFFER_SIZE} -o $@ $<

all: ${NAME}

clean: 
	@rm -rf ${OBJS}
	make -C ./libft clean

fclean: clean
	@rm -rf ${NAME}
	make -C ./libft fclean

re: fclean $(NAME)
