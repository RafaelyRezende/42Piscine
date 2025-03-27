CC=gcc

CFLAGS=-Wall -Wextra -Werror

all: ft_display_file

ft_display_file: srcs/main.o libs/ft_display_file.a
	$(CC) $(CFLAGS) $^ -o $@

libs/ft_display_file.a: srcs/ft_display_file.o srcs/ft_display_file.h
	ar rcs $@ $^

srcs/ft_display_file.o: srcs/ft_display_file.c
	$(CC) $(CFLAGS) -c $^ -o $@

srcs/main.o: srcs/main.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf libs/ft_display_file.a srcs/main.o

fclean:
	make clean
	rm -rf srcs/*.o

re:
	make fclean
	make all
