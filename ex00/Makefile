# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/31 17:38:13 by lvirgini          #+#    #+#              #
#    Updated: 2021/12/20 14:56:36 by eassouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#	 VARIABLES		#
# ----------------- #

NAME =		megaphone

OBJ_DIR =	obj/
SRC_DIR =	./

SRC		= 	megaphone.cpp

OBJ 	=	$(addprefix $(OBJ_DIR),$(SRC:%.cpp=%.o))
HEADERS = 	$(foreach dir, $(INC_DIR), $(wildcard $(dir)/*.h))

vpath %.c $(foreach dir, $(SRC_DIR)/, $(dir):)
vpath %.h $(foreach dir, $(INC_DIR)/, $(dir):)

# ----------------- #
#	 COMPILATION	#
# ----------------- #

CC 		=	clang++

CFLAG 	= 	-Wall -Wextra -Werror -std=c++98

# ----------------- #
#	  FUNCTIONS		#
# ----------------- #

$(OBJ_DIR)%.o: %.cpp $(HEADERS)
			@mkdir -p $(OBJ_DIR)
			@echo "\033[32mCompilation of ... $(foreach file, $< , $(notdir $<))"
			@$(CC) $(CFLAG) $(IFLAG) -o $@ -c $<

$(NAME):	$(OBJ)
			@$(CC) $(CFLAG) $(IFLAG) $(OBJ) -o $@
			@echo "\n*     $(NAME) compilation     *\t   \033[32;1m--> \033[4;5mComplete\033[0m"

all:		$(NAME)

# ----------------- #
# 		CLEAN		#
# ----------------- #

clean:
			rm -rf $(OBJ_DIR)

fclean: clean
			rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
