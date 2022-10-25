SOURCES += ft_strnstr.c
SOURCES += get_next_line_bonus.c
SOURCES += ft_isdigit.c
SOURCES += ft_putstr_fd.c
SOURCES += ft_lstadd_front_bonus.c
SOURCES += ft_lstdelone_bonus.c
SOURCES += ft_lstadd_back_bonus.c
SOURCES += ft_strlcpy.c
SOURCES += ft_strlen.c
SOURCES += ft_lstmap_bonus.c
SOURCES += ft_memcmp.c
SOURCES += ft_putnbr.c
SOURCES += ft_putnbr_fd.c
SOURCES += ft_convertx.c
SOURCES += ft_strchr.c
SOURCES += ft_printf.c
SOURCES += ft_striteri.c
SOURCES += ft_bzero.c
SOURCES += ft_strjoin.c
SOURCES += ft_isascii.c
SOURCES += ft_memcpy.c
SOURCES += ft_lstclear_bonus.c
SOURCES += ft_isprint.c
SOURCES += ft_putendl_fd.c
SOURCES += ft_ptr.c
SOURCES += ft_toupper.c
SOURCES += ft_lstiter_bonus.c
SOURCES += ft_split.c
SOURCES += ft_putchar.c
SOURCES += ft_strrchr.c
SOURCES += ft_lstlast_bonus.c
SOURCES += ft_isalpha.c
SOURCES += ft_memchr.c
SOURCES += ft_putchar_fd.c
SOURCES += ft_memset.c
SOURCES += ft_substr.c
SOURCES += ft_strncmp.c
SOURCES += get_next_line_utils_bonus.c
SOURCES += ft_atoi_plus.c
SOURCES += ft_strmapi.c
SOURCES += ft_strtrim.c
SOURCES += ft_putnbr_u.c
SOURCES += ft_lstsize_bonus.c
SOURCES += ft_memmove.c
SOURCES += ft_lstnew_bonus.c
SOURCES += ft_putstr.c
SOURCES += ft_strlcat.c
SOURCES += ft_calloc.c
SOURCES += ft_strdup.c
SOURCES += ft_putstr_error.c
SOURCES += ft_atoi.c
SOURCES += ft_isalnum.c
SOURCES += ft_itoa.c
SOURCES += ft_tolower.c
INCLUDES += libft_memory.h
INCLUDES += libft_list.h
INCLUDES += libft_converse.h
INCLUDES += libftprintf.h
INCLUDES += libft.h
INCLUDES += get_next_line_bonus.h
INCLUDES += libft_checks.h
INCLUDES += libft_strings.h
INCLUDES += libft_puts.h

NAME 			= libft.a

BLACK			=	\033[0;30m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
ORANGE			=	\033[0;33m
BLUE			=	\033[0;34m
PURPLE			=	\033[0;35m
CYAN			=	\033[0;36m
LIGHT_GRAY		=	\033[0;37m
DARK_GRAY		=	\033[1;30m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
LIGHT_BLUE		=	\033[1;34m
LIGHT_PURPLE	=	\033[1;35m
LIGHT_CYAN		=	\033[1;36m
WHITE			=	\033[1;37m
NO_COLOR		=	\033[0m

INCLUDE_PATH	= ./

OBJS 			= $(SOURCES:.c=.o)

CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror -O3 -Ofast -flto -march=native -ffast-math
RM	 			= rm -f

all: $(NAME)

%.o:	%.c $(INCLUDES) 
	$(CC) $(CFLAGS) -I $(INCLUDE_PATH) -c $< -o $@
	@printf "\033[2K\r$(YELLOW)$(NAME): $(LIGHT_BLUE)$<$(RESET)"


$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)
	@echo Archive\ created!!
	@printf "\033[2K\r$(BLUE)$(NAME): $(GREEN)Compiled Bro!!! [√]$(RESET)\n"

clean:
	@$(RM) $(OBJS)
	@$(RM) a.out
	@printf "$(RED)$(NAME): $(ORANGE)Cleaning all .o in your libft.\n$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(LIGHT_PURPLE)$(NAME): $(LIGHT_CYAN)Cleaning compiled library $(NAME).\n$(RESET)"

re: fclean all

gmk:
	@find sources -name '*.c' | sed 's/^/SOURCES += /' > sources.mk
	@find includes -name '*.h' | sed 's/^/INCLUDES += /' > includes.mk

norminette: clean
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> sources\n$(RESET)"
	@norminette sources
	@echo " "
	@printf "$(BLUE)$(NAME): $(GREEN)norminette -> includes\n$(RESET)"
	@norminette includes

norminette-exported: clean
	@printf "$(BLUE)$(NAME): $(GREEN)norminette exported\n$(RESET)"
	@norminette

export:
	@./scripts/export.sh
	@printf "$(BLUE)$(NAME): $(YELLOW)Libft exported.\n$(RESET)"

end:
	@make fclean
	@make gmk
	@make all
	@make norminette
	@make fclean
	@make export
	@printf "$(BLUE)$(NAME): $(LIGHT_CYAN)Prepared to be pushed.\n$(RESET)"

.PHONY: all clean fclean re gmk norminette norminette-exported export end
