NAME	 = allum1

IDIR	 = include/

LIB	 = libmy.a
LNAME	 = my
LDIR	 = lib/my

CC	 = gcc
CFLAGS	+= -I $(IDIR)
CFLAGS	+= -Wall -Wextra
CFLAGS	+= -Wpedantic -Wno-long-long
CFLAGS	+= -Werror

AI_DIR		= ai/
AI_FILES	= computer.c		\
		  dumb.c		\
		  easy.c		\
		  hard1.c		\
		  hard2.c		\
		  marienbad1.c		\
		  marienbad2.c		\
		  medium1.c		\
		  medium2.c		\
		  random.c
AI		= $(addprefix $(AI_DIR), $(AI_FILES))

BOARD_DIR	= board/
BOARD_FILES	= change.c	\
		  free.c	\
		  print.c
BOARD		= $(addprefix $(BOARD_DIR), $(BOARD_FILES))

SRCS_DIR	= src/
SRCS_FILES	= chk.c			\
		  main.c		\
		  options.c		\
		  player.c		\
		  $(AI)			\
		  $(BOARD)
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS	= $(SRCS:.c=.o)

RM	= rm -f


all: $(LIB) $(NAME)

$(LIB):
	cd $(LDIR) && $(MAKE)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -L lib -l $(LNAME)

clean:
	$(RM) $(OBJS)
	cd $(LDIR) && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd $(LDIR) && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
