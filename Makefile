# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 17:36:18 by myukang           #+#    #+#              #
#    Updated: 2022/03/12 15:07:12 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
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
	@rm -f $(NAME)

clean :
	@rm -f $(OBJS) $(BONUS_OBJS)

re : fclean all

.PHONY: all clean fclean re 
