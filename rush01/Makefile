#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/11/19 05:25:46 by lmarques          #+#    #+#             *#
#*   Updated: 2018/03/01 23:54:55 by lmarques         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME=rush01

SRC_PATH=.
INC_PATH=.
OBJ_PATH=./objs
SFML_INC_PATH=/Users/lmarques/.brew/Cellar/sfml/2.4.2_1/include
SFML_LIB_PATH=/Users/lmarques/.brew/Cellar/sfml/2.4.2_1/lib

SRC_NAME = main.cpp \

OBJ_NAME = $(SRC_NAME:.cpp=.o)

CC = g++
CFLAGS = -Werror -Wextra -Wall

SRC=$(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ=$(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	export LD_LIBRARY_PATH=/Users/lmarques/.brew/Cellar/sfml/2.4.2_1/lib; \
	$(CC) $^ -o $@ -L$(SFML_LIB_PATH) -lsfml-graphics -lsfml-window -lsfml-system

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) -o $@ -c $< $(CFLAGS) -I$(INC_PATH) -I$(SFML_INC_PATH)

clean:
	rm -fv $(OBJ)
		@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re:fclean all

.PHONY: all, clean, fclean, re
