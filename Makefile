CC = gcc
NAME = libft.a
SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_isprint.c ft_toupper.c 
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

.c.o : $(SRCS)
	@$(CC) $(CFLAGS) $< -o $(<:.c=.o) -I . 

$(NAME) : $(OBJS)
	@ar rc $(NAME) $^

main : $(all)
	gcc main.c -lft -L.

mclean :
	@rm -f a.out

fclean : clean
	@rm -f $(NAME)

clean :
	@rm -f $(OBJS)

re : fclean all

.PHONY: all clean fclean re main mclean
