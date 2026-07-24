NAME = ft_cat

CFILES = main.c \
	ft_print_error.c \
	ft_print_fd.c \
	ft_print_file.c \
	ft_print_str.c
SRCS = $(addprefix src/, $(CFILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	cc -Wall -Wextra -Werror -Iinclude $(OBJS) -o $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -Iinclude -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
