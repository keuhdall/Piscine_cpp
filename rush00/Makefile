NAME = ft_retro

CCPP = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

FILENAMES = main.cpp							\
			Engine.cpp							\
			Collection/ACollection.cpp			\
			Collection/StarsCollection.cpp		\
			Collection/RocketsCollection.cpp	\
			Collection/EnemiesCollection.cpp	\
			Collection/AsteroidsCollection.cpp	\
			Collection/EnRockCollection.cpp		\
			Object/AObject.cpp					\
			Object/Star.cpp						\
			Object/Rocket.cpp					\
			Object/Pilot.cpp					\
			Object/Enemy.cpp					\
			Object/Asteroid.cpp

INCLUDE = -I.
LINK = -lncurses


all: $(NAME)

test: $(NAME)
	./$(NAME)

$(NAME): $(FILENAMES)
	$(CCPP) $(CPPFLAGS) $(LINK) $(INCLUDE) $^ -o $@

clean:
	@rm -f $(NAME)
	@echo "removed $(NAME)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
