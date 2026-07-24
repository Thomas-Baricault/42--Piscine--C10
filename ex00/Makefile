NAME = ft_display_file

SRCS = main.c
OBJS = main.o

all: $(NAME)

$(NAME): $(OBJS)
	cc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
