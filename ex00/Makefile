SRCS = randomChump.cpp newZombie.cpp Zombie.cpp main.cpp

OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)
NAME = zombie
VPATH = .

I_DIRS := $(shell find . -type f -name "*.h" -exec dirname {} + | uniq)
INCLUDE = $(I_DIRS:%=-I%)

CC = c++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
OBJS_DIR = ./objs

RM = rm -f

all:	$(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "./$(NAME) made!"

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@echo "./objs made!"

$(OBJS_DIR)/%.o:	%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:	
	@$(RM) -r $(OBJS_DIR)
	@echo "$(NAME) objects removed!"

fclean: clean
	@$(RM) $(NAME)
	@echo "./$(NAME) removed!"
	@rm -rf $(OBJS_DIR)
	@echo "./objs removed!"

re: fclean all

fsan:
	@$(CFLAGS) = $(CFLAGS) fsanitize=address
	@echo "Added fsanitize"

desan:
	@$(CFLAGS) -= " fsanitize=address"
	@echo "Removed fsanitize"

.PHONY: all clean re fclean fsan desan
