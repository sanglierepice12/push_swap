SRCS	=	push_swap.c				\
			ft_atol.c				\
			ft_write.c				\
			nodes.c					\
			parsing.c				\
			check.c					\
			rules_swap.c			\
			rules_push.c

OBJS	=	$(SRCS:%.c=${OBJ_D}%.o)

SRC_D	=	srcs/

OBJ_D	=	objs/

HEAD	=	includes/

NAME	=	push_swap

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror -Iincludes -g

all		:
	@make --no-print-directory bonus -C libft/
	@make --no-print-directory ${NAME}

${OBJS}	:	${OBJ_D}%.o: ${SRC_D}%.c libft/incs/libft.h includes/push_swap.h libft/libft.a
	${CC} ${FLAGS} -c $< -o $@

${NAME}	:	${OBJ_D} ${OBJS} Makefile libft/incs/libft.h includes/push_swap.h
	${CC} ${FLAGS} -o ${NAME} ${OBJS} -L./libft -lft

${OBJ_D}:
	@mkdir -p ${OBJ_D}

clean	:
	@echo "libft :"
	@make --no-print-directory clean -C ./libft
	@echo "push_swap :"
	rm -rf ${OBJ_D}

fclean	:
	@echo "libft :"
	@make --no-print-directory fclean -C ./libft
	@echo "push_swap :"
	rm -rf ${OBJ_D}
	rm -f ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
