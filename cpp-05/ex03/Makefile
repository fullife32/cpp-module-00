# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/31 17:38:13 by lvirgini          #+#    #+#              #
#    Updated: 2022/02/14 01:59:23 by eassouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------- #
#	 VARIABLES		#
# ----------------- #

NAME	=	intern

OBJ_DIR	=	obj/
INC_DIR	=	./
SRC_DIR	=	./

SRC		= 	main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

OBJ		=	$(addprefix $(OBJ_DIR),$(SRC:%.cpp=%.o))
HEADERS	= 	$(foreach dir, $(INC_DIR), $(wildcard $(dir)/*.hpp))

vpath %.cpp $(foreach dir, $(SRC_DIR)/, $(dir):)
vpath %.hpp $(foreach dir, $(INC_DIR)/, $(dir):)

# ----------------- #
#	 COMPILATION	#
# ----------------- #

CC		=	c++

CFLAG	=	-Wall -Wextra -Werror -std=c++98
IFLAG	=	$(foreach dir, $(INC_DIR), -I $(dir))

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

fclean:	clean
			rm -f $(NAME)

re: 	fclean all

.PHONY:	all clean fclean re
