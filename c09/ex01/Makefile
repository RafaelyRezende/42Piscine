CC=gcc

CFLAGS=-Wall -Wextra -Werror

H_DIR=includes/ft.h

all: libft.a

libft.a: ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o $(H_DIR)
	ar rcs libft.a srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

ft_putchar.o: srcs/ft_putchar.c $(H_DIR)
	$(CC) $(CFLAGS) -c $< -o srcs/$@

ft_swap.o: srcs/ft_swap.c $(H_DIR)
	$(CC) $(CFLAGS) -c $< -o srcs/$@

ft_putstr.o: srcs/ft_putstr.c $(H_DIR)
	$(CC) $(CFLAGS) -c $< -o srcs/$@

ft_strlen.o: srcs/ft_strlen.c $(H_DIR)
	$(CC) $(CFLAGS) -c $< -o srcs/$@

ft_strcmp.o: srcs/ft_strcmp.c $(H_DIR)
	$(CC) $(CFLAGS) -c $< -o srcs/$@

clean:
	rm -rf libft.a

fclean:
	rm -rf srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o libft.a

re:
	make fclean
	make all
