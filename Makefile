NAME = libft.a

SRCS = $(addprefix ./, ${wildcard *.c})
#$(addprefix ./srcs/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)

OBJ = $(SRCS:%.c=%.o)

LIBS = ar -rcs

CC = gcc
CFLAGS = -Wall -Werror -Wextra

INCL = -I ./

all: $(OBJ)
	$(LIBS) $(NAME) $(OBJ)
# %.o: %.c
# 	$(CC) -c $< -o $@ $(INCL)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all