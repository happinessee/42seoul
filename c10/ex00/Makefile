NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all = $(NAME)

SRC_DIR = srcs/
INC_DIR = includes/

SRCS = $(SRC_DIR)main.c \
	   $(SRC_DIR)ft_print.c \
	   $(SRC_DIR)

INCLUDES = $(INC_DIR)ft_display.h

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@ -I $(INC_DIR)

clean :
		rm -f

fclean :
		rm -f $(NAME)

re :
		fclean all
