#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

-include sources.mk
-include includes.mk 
-include sources_bonus.mk
-include includes_bonus.mk
-include $(DEPS)

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

NAME		= push_swap

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

MAKE_LIB		= libft.a
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -g3 -MMD -MT -MP -I $(LIB_DIR) 
RM				= rm -rf
MKFL			= Makefile
MD				= mkdir -p
LIB_DIR			= ./libft

#=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=#

INCLUDES		= $(INCLUDE_PATH)/push_swap.h
INCLUDE_PATH	= ./includes

OBJS			= $(SOURCES:.c=.o)
DEPS			= $(SOURCES:.c=.d)

all: 
	@$(MAKE) -C $(LIB_DIR)
	@cp libft/libft.a .
	@$(MAKE) gmk
	@$(MAKE) $(NAME)

#$(NAME): $(MAKE_LIB) $(OBJS) $(INCLUDES) $(MKFL) $(DEPS)
$(NAME): $(OBJS)
	$(MAKE) gmk
	$(CC) $(CFLAGS) -I $(INCLUDE_PATH) $(OBJS) $< -o $@
	@printf "\033[2K\r$(YELLOW)$(NAME): $(LIGHT_BLUE)$<$(RESET)"
	@printf "\033[2K\r$(BLUE)$(NAME): $(GREEN)Push_swap Compiled and ready![√]$(RESET)\n"

#$(MAKE_LIB):
#	make -C libft
#	cp libft/libft.a .

#=-=-=-=-=-=-=-=-=- BONUS =-=-=-=-=-=-=-=-=-=-=-=-=-#

NAME_BONUS				= checker

INCLUDE_PATH_BONUS	=./includes_bonus

OBJS_BONUS			=$(SOURCES_BONUS:.c=.o)
DEPS_BONUS			=$(SOURCES_BONUS:.c=.d)

bonus:
	$(MAKE) $(NAME_BONUS)

$(NAME_BONUS): $(MAKE_LIB) $(OBJS_BONUS) $(MKFL)
	$(CC) $(CFLAGS) -I $(INCLUDE_PATH_BONUS) $(OBJS_BONUS) $< -o $@
	@printf "\033[2K\r$(BLUE)$(NAME): $(GREEN)Bonus compiled and ready[√]$(RESET)\n"
	
#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

gmk:
	@find sources -name '*.c' | sed 's/^/SOURCES += /' > sources.mk
	@find includes -name '*.h' | sed 's/^/INCLUDES += /' > includes.mk

gmk_bonus:
	@find sources_bonus -name '*.c' | sed 's/^/SOURCES_BONUS += /' > sources_bonus.mk
	@find includes_bonus -name '*.h' | sed 's/^/INCLUDES_BONUS += /' > includes_bonus.mk

clean:
	@make fclean -C libft
	@$(RM) $(MAKE_LIB)
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@$(RM) $(DEPS)
	@$(RM) $(DEPS_BONUS)
	@$(RM) a.out
	@$(RM) a\ *.out
	@$(RM) libft/*\ *.o
	@$(RM) libft/*\ *.d
	@$(RM) sources/*\ *.o
	@$(RM) sources/*\ *.d
	@echo "Cleaning all the .o in your libft and project!"

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)
	@echo "Cleaning all the compiled library!"

re: fclean all

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

.PHONY: all clean fclean re gmk bonus gmk_bonus

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#
