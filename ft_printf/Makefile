NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS = ft_printf.h
OBJ = ft_printf.o ft_printf_arg.o ft_print_char.o ft_print_str.o \
	  ft_print_int.o ft_print_ptr.o ft_ptr_hex.o ft_print_hex.o \
	  ft_print_unsigned.o
OBJ := $(OBJ:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
