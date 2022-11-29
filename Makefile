NAME = philo

SRCS = src/philo.c \
		src/utils/ph_put_utils.c

INCLUDE = philosophers.h \

CC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
#-g3 -fsanitize=thread

%.o: %.c ${INCLUDE}
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
			${RM} ${OBJS}

fclean:
			${RM} ${OBJS}
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
