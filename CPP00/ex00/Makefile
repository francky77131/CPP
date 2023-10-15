# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 14:19:10 by frgojard          #+#    #+#              #
#    Updated: 2023/10/03 14:19:11 by frgojard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Folders and Names
NAME		= megaphone
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .

SRCS		= megaphone.cpp

# Compiler options
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

###################################################
# The rest is done by the MakeFile automatically, #
# you should not have to modify it				  #
###################################################

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Assembling $@"
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test