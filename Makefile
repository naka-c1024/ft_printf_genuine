# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ynakashi <ynakashi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 11:56:04 by ynakashi          #+#    #+#              #
#    Updated: 2021/11/11 11:58:21 by ynakashi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC		= gcc

RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

SRCS	= ./srcs/ft_printf.c ./srcs/utils.c ./srcs/cspdi_put.c ./srcs/uxlxper_put.c

# This wasn't flagged when creating object files -> suffix rule
OBJS	= $(SRCS:.c=.o)

LIBFT_PATH	= ./libft/
LIBFT_OBJS	= $(LIBFT_PATH)*.o
LIBFT_ARC	= $(LIBFT_PATH)*.a
LIBFT_MAKE	= make -C $(LIBFT_PATH)

# suffix rule
# make -p で暗黙のルールが見れる
# explicitly add a flag when creating object files
#$< 最初の依存するファイルの名前 -> 元になるファイル
#$@ ターゲットファイル名 -> 作りたいファイル
#echo $<
#echo $@
.c.o	:
		$(CC) $(CFLAGS) -c $< -o $@

#$(OBJS)	: $(SRCS)
#	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME) : $(OBJS)
	$(LIBFT_MAKE)
	ar -rc $(NAME) $(OBJS) $(LIBFT_OBJS)

all		: $(NAME)

clean	:
		$(RM) $(OBJS) $(LIBFT_OBJS) $(LIBFT_ARC)

fclean 	: clean
		$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re