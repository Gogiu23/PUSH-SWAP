#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

-include sources.mk
-include includes.mk 
-include sources_bonus.mk
-include includes_bonus.mk

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

NAME		= push_swap

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

MAKE		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I ./libft  
RM			= rm -rf
MKFL		= Makefile
MD			= mkdir -p

#=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=#

INCLUDE_PATH	=./includes

OBJS			=$(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(MAKE) $(OBJS) $(INCLUDES) $(MKFL)
	$(CC) $(CFLAGS) -I $(INCLUDE_PATH) $(OBJS) $< -o $@
	@printf "\033[2K\r$(YELLOW)$(NAME): $(LIGHT_BLUE)$<$(RESET)"
	@printf "\033[2K\r$(BLUE)$(NAME): $(GREEN)Push_swap Compiled and ready![√]$(RESET)\n"

$(MAKE):
	make -C libft
	cp libft/libft.a .

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

#=-=-=-=-=-=-=-=-=- BONUS =-=-=-=-=-=-=-=-=-=-=-=-=-#

NAME_BONUS				= checker

INCLUDE_PATH_BONUS	=./includes_bonus

OBJS_BONUS			=$(SOURCES_BONUS:.c=.o)

all: $(NAME_BONUS)

bonus: $(MAKE) $(OBJS_BONUS) $(INCLUDES_BONUS) $(MKFL)
	$(CC) $(CFLAGS) -I $(INCLUDE_PATH_BONUS) $(OBJS_BONUS) $< -o $(NAME_BONUS)
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
	@$(RM) $(MAKE)
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@$(RM) a.out
	@echo "Cleaning all the .o in your libft and project!"

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)
	@echo "Cleaning all the compiled library!"

re: fclean all

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#

.PHONY: all clean fclean re make gmk bonus gmk_bonus

#=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-#
