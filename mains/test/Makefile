NAME = test

.PHONY: all
all: $(NAME)

$(NAME): *.c
	cc $(COMPILE_FLAGS) -L.. -lft -I.. -o $(NAME) *.c

.PHONY: clean
clean:
	rm -f *.o

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
