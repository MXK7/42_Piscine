SRCS 	= "srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c"
NAME 	= libft.a
OBJS 	= ${SRCS:.c=.o} 
HEADERS = includes/

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re: fclean all

.c.o:
	gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}
	
${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}