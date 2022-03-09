CC = gcc
NAME = libft.a
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strdup.c ft_atoi.c ft_strchr.c ft_strrchr.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

.c.o : $(SRCS)
	$(CC) -g $(CFLAGS) $< -o $(<:.c=.o) -I . 

$(NAME) : $(OBJS)
	ar rc $(NAME) $^

main : $(re)
	gcc -Wall -Wextra -Werror main.c -lft -L.

dmain : $(re)
	$(cc) -g main.c -lft -L.

mclean :
	@rm -f a.out

fclean : clean
	@rm -f $(NAME)

clean :
	@rm -f $(OBJS)

re : fclean all

.PHONY: all clean fclean re main mclean
