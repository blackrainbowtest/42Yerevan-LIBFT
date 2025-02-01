# C sources
CSRC := ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strlen.c

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
	# compiler|flags|only compile|$< current file name|set name as|replace file type .c to .o
	${CC} ${FLAGS} -c $< -o $@

# Build my library
all: ${NAME}

# Build my library
# ar - Create/Modify archive
# r - add/replace files
# c - create new archive
# s - create symbol index
${NAME}: ${OSRC}
	ar rcs $@ $^

# clean obj files only
clean:
	${RM} ${OSRC}

# clean all files
fclean: clean
	${RM} ${NAME}

# clean all files and compile again
re: fclean all

