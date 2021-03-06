# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 17:36:18 by myukang           #+#    #+#              #
#    Updated: 2022/04/12 14:43:40 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -c

ifdef BONUS_MADE
	OBJ_FILES = $(OBJS) $(BONUS_OBJS)
else
	OBJ_FILES = $(OBJS)
endif

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rsc $(NAME) $^

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@ -I .

$(BONUS) : 
	make BONUS_MADE=1 all

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJS) $(BONUS_OBJS)

re : fclean all

.PHONY: all clean fclean re 
