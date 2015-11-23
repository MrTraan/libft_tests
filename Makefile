NAME = test
TEST_FILES = maintest.c test_mem.c
LIB_DIR = "../libft"
INCLUDES = "-I../libft"

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(INCLUDES) -c $(TEST_FILES)
	gcc -Wall -Werror -Wextra -o $(NAME) -L$(LIB_DIR) -lft $(TEST_FILES:.c=.o)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(TEST_FILES:.c=.o)

re: fclean $(NAME)
