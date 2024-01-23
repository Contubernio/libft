# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albealva <albealva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 11:37:24 by albealva          #+#    #+#              #
#    Updated: 2024/01/23 20:36:57 by albealva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# UNA REGLA MIRA SIMPLEMENTE A LA FECHA DE MODIFICACION DE LO QUE ESTA' 
# A LA IZQUIERDA DE LOS DOS PUNTOS CON LO QUE ESTA A LA DERECHA

#=-=-=-=-=-=-=- COLORS DEFINITION =-=-=-=-=-=-=-=-=-#

DEL_LINE		=	\033[2K
ITALIC			=	\033[3m
BOLD			=	\033[1m
DEF_COLOR		=	\033[0;39m
GRAY			=	\033[0;90m
RED				=	\033[0;91m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
BLUE			=	\033[0;94m
MAGENTA			=	\033[0;95m
CYAN			=	\033[0;96m
WHITE			=	\033[0;97m
BLACK			=	\033[0;99m
ORANGE			=	\033[38;5;209m
BROWN			=	\033[38;2;184;143;29m
DARK_GRAY		=	\033[38;5;234m
MID_GRAY		=	\033[38;5;245m
DARK_GREEN		=	\033[38;2;75;179;82m
DARK_YELLOW		=	\033[38;5;143m


#==================================VARIABLES===================================#
NAME		= 	libft.a
CC			= 	gcc
FLAGS		= 	-Wall -Wextra -Werror -MMD
REMOVE		= 	rm -rf
LIBC		= 	ar -rcs
#====================================pack======================================#
PACK 		= 	ft_atoi.c  \
				ft_calloc.c \
				ft_bzero.c   \
				ft_isalnum.c  \
				ft_isalpha.c   \
				ft_isascii.c    \
				ft_isdigit.c 	 \
				ft_isprint.c 	  \
				ft_memchr.c        \
				ft_memcmp.c         \
				ft_memcpy.c          \
				ft_memmove.c          \
				ft_memset.c            \
				ft_strchr.c             \
				ft_strdup.c              \
				ft_strjoin.c              \
				ft_strlcat.c               \
				ft_strlcpy.c                \
				ft_strlen.c                  \
				ft_strncmp.c                  \
				ft_strrchr.c                   \
				ft_strstr.c                     \
				ft_toupper.c                     \
				ft_strtrim.c                      \
				ft_substr.c                        \
				ft_tolower.c                        \
				ft_itoa.c                            \
				ft_split.c							  \
				ft_strmapi.c 						   \
				ft_striteri.c 							\
				ft_putchar_fd.c 						 \
				ft_putstr_fd.c 							  \
				ft_putendl_fd.c 						   \
				ft_putnbr_fd.c 								\
#================================directory======================================#
DIR 	=		objects

OBJ 	=		$(addprefix $(DIR)/, $(PACK:.c=.o))
DEP 	=		$(addprefix $(DIR)/, $(PACK:.c=.d))
#==================================rules========================================#
all:	dir $(NAME)

dir:
	@mkdir -p $(DIR)
#	@echo "$(BLUE)Directory created$(DEF_COLOR)"

$(DIR)/%.o: %.c # : ES UNA REGLA $< primera dep $@ antes :
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(YELLOW)$< with $(FLAGS) compiled!$(DEF_COLOR)"

$(NAME): $(OBJ) # : ES UNA REGLA $^ todo despues :
	@$(LIBC) $@ $^
	@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

clean: # SE UTILIZA DE NORMAL PARA BORRAR ARCHIVOS .O Y .D
	@$(REMOVE) $(OBJ) $(DEP)
	@echo "$(CYAN)Clean executed!$(DEF_COLOR)"

fclean: clean # SE UTILIZA DE NORMAL PARA BORRAR CARPETAS, LIBRERIAS Y NAME
	@$(REMOVE) $(DIR) $(NAME)
	@echo "$(CYAN)Fclean executed!$(DEF_COLOR)"

re: fclean all

-include $(DEP)

.PHONY: all dir clean fclean re