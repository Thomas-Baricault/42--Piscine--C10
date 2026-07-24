NAME = ft_tail

CFILES = main.c \
	ft_atoi.c \
	ft_print_fd.c \
	ft_print_file.c \
	ft_print_str.c \
	ft_read_count.c \
	ft_strcmp.c
SRCS = $(addprefix src/, $(CFILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	cc -Wall -Wextra -Werror -Iinclude $(OBJS) -o $(NAME) -g3

%.o: %.c
	cc -Wall -Wextra -Werror -Iinclude -c $< -o $@ -g3

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
