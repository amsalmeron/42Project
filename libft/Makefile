CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.h
OBJ = $(wildcard *.c)

libft.a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f *.o libft.a

fclean: clean
	rm -rf $(NAME)
