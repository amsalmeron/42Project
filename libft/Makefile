NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.h
OBJ = $(wildcard *.c)
OBJ := $(OBJ:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f *.o $(NAME)

re: fclean all

.PHONY: all clean fclean re
