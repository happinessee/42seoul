CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGETS = libft.a

SRC_DIR = srcs/
INC_DIR = includes/

AR = ar
INCLUDES = $(INC_DIR)ft.h
SOURCES = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_swap.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)

%.o : %.c
		$(CC) -c $(CFLAGS) $< -o $@ -I $(INC_DIR)

$(TARGETS) : $(OBJECTS)
		$(CC) -c $(CFLAGS) -o $@ $^

.PHONY: clean, fclean, re, all
all : $(TARGETS)

clean :
		rm -f $(OBJECTS)

fclean : clean
		rm -f $(TARGET)

re : fclean all
