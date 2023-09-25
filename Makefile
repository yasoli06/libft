NAME = libft.a

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memset.c ft_strlcpy.c ft_strlen.c ft_tolower.c \
	  ft_toupper.c ft_memmove.c ft_memcpy.c ft_strchr.c ft_memchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strlcat.c

OBJECTS = $(SRC:%.c=%.o)

INCLUDES = 	libft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

cc = gcc
FLAGS = -Wall -Wextra -Werror

clean:
	$(RM) $(OBJECTS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean 
