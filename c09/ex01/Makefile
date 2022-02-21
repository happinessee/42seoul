CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC_DIR = srcs/
INC_DIR = includes/

AR = ar
INCLUDES = $(INC_DIR)ft.h
SOURCES = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)

%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(NAME) : $(OBJECTS)
		$(AR) rc $@ $^

.PHONY: clean, fclean, re, all
all : $(NAME)

clean :
		rm -f $(OBJECTS)

fclean : clean
		rm -f $(NAME)

re : fclean all
