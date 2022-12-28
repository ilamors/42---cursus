# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmorsli <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 22:37:13 by lmorsli           #+#    #+#              #
#    Updated: 2022/12/16 22:38:10 by lmorsli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c\
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c\
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c\
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c\
			ft_toupper.c

BONUS		= ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

HEADER	= libft.h
CC	= cc
FLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

#Compile nos .c en .o
OBJS	= ${SRCS:.c=.o}
OBJS_BONUS	= ${BONUS:.c=.o}
%.o: %.c ${SRCS}
		$(CC) $(FLAGS) -c -o $@ $<
#Creer une archive 'libft.a' contenant tout nos .o
$(NAME): ${OBJS} ${HEADER}
		ar rcs ${NAME} ${OBJS}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJS_BONUS)

so:
$(NAME:.a=.so): $(SRCS_O) $(BONUS_O)
	$(CC) -shared -o $@ $^

all: $(NAME)
#Ajoute / Creer 'libft.a' contenant les .o des bonus
bonus: ${OBJS} ${OBJS_BONUS}
		ar rcs ${NAME} ${OBJS} ${OBJS_BONUS}
#Fait rm -rf pour tout les fichier .o
clean:
		rm -f ${OBJS} ${OBJS_BONUS}
#Utilise la regle clean, puis retire egalement libft.a et a.out
fclean:	clean
		rm -f ${NAME} a.out

re:		fclean all

.PHONY:	all bonus clean fclean re
