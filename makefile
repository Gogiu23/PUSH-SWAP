# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdominic <gdominic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/04 18:36:02 by gdominic          #+#    #+#              #
#    Updated: 2022/09/19 12:59:55 by gdominic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= push_swap

#OBJS		= $(SOURCES:.c=.o)

MAKE		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I ./libft -L./ -lft
RM			= rm -rf
SOURCES		= push_swap.c ft_checks_args.c ft_array_generator.c ft_checks_ints.c \
			  ft_free_mem.c ft_error.c ft_sa.c ft_sort.c ft_ra.c ft_pb.c ft_pa.c \

INCLUDE		= push_swap.h

all: $(NAME)

$(NAME): $(MAKE) $(SOURCES) $(INCLUDE)
	$(CC) $(CFLAGS) $(SOURCES) -o $@
	@echo "Compilado!!"

$(MAKE):
	make -C libft
	cp libft/libft.a .

clean:
	@make fclean -C libft
	@$(RM) $(MAKE)
	@$(RM) $(OBJS)
	@$(RM) a.out
	@echo "Cleaning all the .o in your libft and project!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Cleaning all the compiled library!"

re: fclean all

.PHONY: all clean fclean re make

