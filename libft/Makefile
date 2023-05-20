NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEPS = libft.h
OBJ = ft_memset.o ft_atoi.o ft_putchar_fd.o ft_bzero.o ft_putendl_fd.o \
	ft_calloc.o ft_putnbr_fd.o ft_isalnum.o ft_putstr_fd.o ft_isalpha.o \
	ft_split.o ft_isascii.o ft_strchr.o ft_isdigit.o ft_strdup.o ft_isprint.o \
	ft_striteri.o ft_itoa.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o \
	ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o \
	ft_strtrim.o ft_substr.o ft_memchr.o ft_tolower.o ft_memcmp.o ft_toupper.o \
	ft_memcpy.o ft_memmove.o
OBJ := $(OBJ:.c=.o)
BONUS = ft_lstnew.o ft_lstadd_back.o ft_lstadd_front.o ft_lstdelone.o \
		ft_lstmap.o ft_lstsize.o ft_lstlast.o ft_lstclear.o ft_lstiter.o 
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
