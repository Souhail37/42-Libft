# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 11:21:28 by sismaili          #+#    #+#              #
#    Updated: 2021/11/12 22:24:32 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_atoi.c	\
		ft_isalpha.c	\
		ft_memchr.c	\
		ft_memset.c	\
		ft_strjoin.c	\
		ft_strncmp.c	\
		ft_substr.c	\
		ft_bzero.c	\
		ft_isascii.c	\
		ft_memcmp.c	\
		ft_split.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_tolower.c	\
		ft_calloc.c	\
		ft_isdigit.c	\
		ft_memcpy.c	\
		ft_strchr.c	\
		ft_strlcpy.c	\
		ft_strrchr.c	\
		ft_toupper.c	\
		ft_isalnum.c	\
		ft_isprint.c	\
		ft_memmove.c	\
		ft_strdup.c	\
		ft_strlen.c	\
		ft_strtrim.c	\
		ft_itoa.c	\
		ft_strmapi.c	\
		ft_striteri.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\

SRC_BONUS = ft_lstnew.c	\
			ft_lstadd_front.c	\
			ft_lstsize.c	\
			ft_lstlast.c	\
			ft_lstadd_back.c	\
			ft_lstdelone.c	\
			ft_lstclear.c	\
			ft_lstiter.c	\
			ft_lstmap.c	\

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

NAME = libft.a

%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@
	
$(NAME): ${OBJS}
	ar rc ${NAME} ${OBJS}

bonus: ${OBJS_BONUS}
	ar rc ${NAME} ${OBJS_BONUS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
