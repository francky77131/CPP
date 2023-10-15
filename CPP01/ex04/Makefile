# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: franckgojard <franckgojard@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 13:21:32 by frgojard          #+#    #+#              #
#    Updated: 2023/09/15 17:13:20 by franckgojar      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= a.out
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
OBJDIR = .objFiles

FILES		= main


SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

#Debug 
ifeq ($(DEBUG), 1)
   OPTS = -g
endif

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all