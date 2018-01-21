SWITCH :=			\033[

DEFAULT :=			$(SWITCH)0m
BOLD :=				$(SWITCH)1m
BLINK :=			$(SWITCH)5m
NORMAL :=			$(SWITCH)25m
RED :=				$(SWITCH)31m
GREEN :=			$(SWITCH)32m
YELLOW :=			$(SWITCH)33m
CYAN :=				$(SWITCH)36m
LIGHT_RED :=		$(SWITCH)91m
LIGHT_YELLOW :=		$(SWITCH)93m
LIGHT_GREEN :=		$(SWITCH)92m
LIGHT_CYAN :=		$(SWITCH)96m

NAME :=				ft_retro

SRCS :=				main.cpp			\
					ClassBullet.cpp		\
					ClassPlayer.cpp		\
					ClassEnemy.cpp		\
					ClassInfo.cpp

OBJS_DIR :=			objs/
RETRO_OBJS :=		$(SRCS:.cpp=.o)
OBJS :=				$(addprefix $(OBJS_DIR), $(RETRO_OBJS))

INC_DIR :=			./
INC :=				-I$(INC_DIR)

CC :=				g++#clang++

CFLAGS :=			-Wall -Wextra -Werror
LIBFLAGS :=			-lncurses
FLAGS :=			$(CFLAGS) $(LIBFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Linking binary...$(DEFAULT)"
	$(CC) $(LIBFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)\nDone!\n$(BOLD)./$(NAME)$(DEFAULT)$(GREEN) - for run program$(DEFAULT)"

$(OBJS_DIR)%.o: %.cpp
	@echo "$(YELLOW)Compiling object file: $(BOLD)$(LIGHT_YELLOW)$@$(DEFAULT)"
	@$(CC) $(CFLAGS) -std=c++98 $(INC) -c $< -o $@  

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR):
	@mkdir $(OBJS_DIR)

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)$(OBJS_DIR) deleted.$(DEFAULT)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted.$(DEFAULT)"

re: fclean all

pu: fclean 
	@echo "$(BOLD)$(CYAN)Cleaned for push.$(DEFAULT)"

.PHONY: clean fclean re pu
