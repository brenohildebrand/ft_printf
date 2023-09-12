# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:30:27 by bhildebr          #+#    #+#              #
#    Updated: 2023/09/12 16:23:01 by bhildebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# IMPORTANT
#	change makefile to compile the Libft first and then use its libft.a output
#	to compile the printf lib.

NAME := printf.a

SUBDIRS = ./dependencies/Libft

CC := gcc
CFLAGS := -Wall -Wextra -Werror -MMD -MP

SOURCES = ./source/*.c
HEADERS = ./source/*.h
OBJECTS = ./*.o
DEPENDS = ./*.d

all: $(NAME) 

$(NAME): $(SUBDIRS)
	$(CC) $(CFLAGS) $(SOURCES) -c
	ar rcs $(NAME) $(OBJECTS)

$(SUBDIRS):
	@$(MAKE) -C $@ -s

clean:
	rm -f $(OBJECTS) $(DEPENDS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME) 
	$(CC) $(CFLAGS) ./tests/*.c -o test
	./test
	rm -f ./test

.PHONY: all clean fclean re test $(SUBDIRS)
