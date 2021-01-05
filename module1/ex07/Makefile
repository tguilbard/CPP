# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldutriez <ldutriez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/16 08:17:15 by ldutriez          #+#    #+#              #
#    Updated: 2020/12/23 14:00:24 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

CC =		g++

SRC_DIR = 	.

vpath %.cpp $(foreach dir, $(SRC_DIR), $(dir):)

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

CFLAGS = -Wall -Wextra -Werror

# Colors

_GREY=	$'\033[30m
_RED=	$'\033[31m
_GREEN=	$'\033[32m
_YELLOW=$'\033[33m
_BLUE=	$'\033[34m
_PURPLE=$'\033[35m
_CYAN=	$'\033[36m
_WHITE=	$'\033[37m

all:			$(NAME)

show:
				@echo "$(_BLUE)SRC :\n$(_YELLOW)$(SRC)$(_WHITE)"
				@echo "$(_BLUE)CFLAGS :\n$(_YELLOW)$(CFLAGS)$(_WHITE)"

%.o : %.cpp
				@echo "Compiling $(_YELLOW)$@$(_WHITE) ... \c"
				@$(CC) $(CFLAG) -o $@ -c $<
				@echo "$(_GREEN)DONE$(_WHITE)"

$(NAME): 		$(INC_DIR) $(OBJ) Makefile
				@echo "-----\nCreating Executable $(_YELLOW)$@$(_WHITE) ... \c"
				@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
				@echo "$(_GREEN)DONE$(_WHITE)\n-----"

re:				fclean all

clean:
				@echo "$(_WHITE)Deleting Object $(_YELLOW)$(OBJ)$(_WHITE) ... \c"
				@rm -rf $(OBJ)
				@echo "$(_GREEN)DONE$(_WHITE)\n-----"

fclean:			clean
				@echo "Deleting Binary File $(_YELLOW)$(NAME)$(_WHITE) ... \c"
				@rm -f $(NAME) 
				@echo "$(_GREEN)DONE$(_WHITE)\n-----"

.PHONY: all clean flcean re show
