NAME 		= liblist.a

DIR 		= ./

HEADER 		= ./liblist.h

HEADER_DIR	= ./

FUNCTIONS 	= ft_lstnew.c\
		  ft_lstdelone.c\
		  ft_lstdel.c\
		  ft_lstadd.c\
		  ft_lstiter.c\
		  ft_lstmap.c

SOURCE		= $(addprefix $(DIR), $(FUNCTIONS))

OBJECTS		= $(SOURCE:.c=.o)

FLAGS		?= -Wall -Wextra -Werror

all: $(OBJECTS) $(NAME)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@ -I $(HEADER_DIR) -MD

-include  *.d

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS) $?
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS) *.d

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

