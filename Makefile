##
## Makefile for allum1 in /home/boitea_r
## 
## Made by Ronan Boiteau
## Login   <boitea_r@epitech.net>
## 
## Started on  Fri Jan 29 20:59:04 2016 Ronan Boiteau
## Last update Sun Feb 21 20:23:18 2016 Ronan Boiteau
##

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

SDIR	 = src/
SRCS	 = $(SDIR)board/change.c			\
	   $(SDIR)board/free.c				\
	   $(SDIR)board/print.c				\
	   $(SDIR)chk.c					\
	   $(SDIR)ai/computer.c				\
	   $(SDIR)ai/dumb.c				\
	   $(SDIR)ai/easy.c				\
	   $(SDIR)ai/hard1.c				\
	   $(SDIR)ai/hard2.c				\
	   $(SDIR)ai/marienbad1.c			\
	   $(SDIR)ai/marienbad2.c			\
	   $(SDIR)ai/medium1.c				\
	   $(SDIR)ai/medium2.c				\
	   $(SDIR)ai/random.c				\
	   $(SDIR)main.c				\
	   $(SDIR)options.c				\
	   $(SDIR)player.c

OBJS	 = $(SRCS:.c=.o)

RM	 = rm -f


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
