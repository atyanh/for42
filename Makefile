SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_toupper.c ft_tolower.c

all:
	gcc -Wall -Werror -Wextra main.c libft.h $(SRCS) && ./a.out
