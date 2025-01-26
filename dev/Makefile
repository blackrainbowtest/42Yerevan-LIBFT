# C sources
CSRC := ft_isalpha.c ft_isdifit.c \
		  main.c
# Create object files from C sources files
OSRC = $(CSRC:.c=.o)
# Define flags
FLAGS := -Wall -Werror -Wextra
# Define compiler type (if not define by default gcc)
CC := cc
# Sortcat for remove comand
RM := rm -f
# Define program name
NAME := libft.a

# Define how must compile all C files to O files
.c.o:
#	compiler|flags|only compile|$< current file name|set name as|replace file type .c to .o
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OSRC}
	ar rcs $@ $^

clean:
	${RM} ${OSRC}

fclean: clean
	${RM} ${NAME}

re: fclean all

