# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbelarmi <dbelarmi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 01:09:43 by coder             #+#    #+#              #
#    Updated: 2022/09/27 16:48:27 by dbelarmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a 

SRCS	= ft_strlen.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_memcmp.c \
		  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		  ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
		  ft_toupper.c ft_atoi.c ft_strlcat.c ft_strjoin.c ft_strtrim.c ft_split.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c \
		  ft_strmapi.c ft_itoa.c ft_split.c ft_strdup.c  ft_substr.c ft_calloc.c

OBJS	= ${SRCS:.c=.o} 

CC 		= clang
RM		= rm -rf 

CFLAGS	= -Wall -Wextra -Werror 

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 


${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}


all:		${NAME}

clean: 
			$(RM) ${OBJS}

fclean:		clean
			$(RM) ${NAME} 
			

re:			fclean all

.PHONY:		all fclean clean re

normi:
			clear
			norminette -R CheckForbbidenSourceHeader
