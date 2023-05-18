NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.h
OBJ = $(wildcard *.c)
OBJ := $(OBJ:.c=.o)
BONUS = $(wildcard ft_lst*.c)
BONUS := $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ) $(BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS) $(OBJ)
	ar rcs $(NAME) $^


.PHONY: all clean fclean re bonus
