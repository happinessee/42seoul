CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op

SRC_DIR = srcs/
INC_DIR = includes/

INCLUDES = $(INC_DIR)ft_do_op.h
SOURCES = $(SRC_DIR)ft_atoi.c $(SRC_DIR)ft_printall.c $(SRC_DIR)ft_calc.c $(SRC_DIR)main.c

$(NAME) : $(SOURCES)
		$(CC) $(CFLAGS) $^ -o $@ -I $(INC_DIR)

all : $(NAME)

clean :
		rm -f

fclean : clean
		rm -f $(NAME)

re : fclean all
