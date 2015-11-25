P1_FILES = mainpart1.c test_mem.c test_str.c test_num.c
P2_FILES = mainpart2.c test_str.c test_other.c
LIB_DIR = "../libft"
INCLUDES = "-I../libft"

all: part1 part2

part1:
	gcc -Wall -Werror -Wextra $(INCLUDES) -c $(P1_FILES)
	gcc -Wall -Werror -Wextra -o part1 -L$(LIB_DIR) -lft $(P1_FILES:.c=.o)

part2:
	gcc -Wall -Werror -Wextra $(INCLUDES) -c $(P2_FILES)
	gcc -Wall -Werror -Wextra -o part2 -L$(LIB_DIR) -lft $(P2_FILES:.c=.o)

clean:
	rm -f $(P1_FILES:.c=.o) $(P2_FILES:.c=.o)

fclean: clean
	rm -f part1 part2

re: fclean all
