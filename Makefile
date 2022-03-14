# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 17:36:18 by myukang           #+#    #+#              #
#    Updated: 2022/03/14 16:59:07 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

.c.o : $(SRCS) $(BONUS_SRCS)
	$(CC) $(CFLAGS) $< -o $(<:.c=.o) -I .

$(NAME) : $(OBJS)
	ar rc $(NAME) $^

bonus : $(BONUS_OBJS) $(OBJS)
	ar rc $(NAME) $^

fclean : clean
	rm -f $(NAME)

clean :
	rm -f $(OBJS) $(BONUS_OBJS)

re : fclean all

.PHONY: all clean fclean re 
