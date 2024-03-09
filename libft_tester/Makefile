# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrabarij <nrabarij@student.42antanana>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 18:38:45 by nrabarij          #+#    #+#              #
#    Updated: 2024/03/09 14:27:22 by nrabarij         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *** CONSTANT DEFINITION **************************************************** #
NAME			=	libft.a
CC				=	cc
RM				=	rm -rf
AR				=	ar rcs
CFLAG			=	-Wall -Wextra -Werror
SRC				=	ft_atoi.c		ft_isalpha.c		ft_isdigit.c	\
					ft_isalnum.c	ft_isprint.c		ft_strlen.c		\
					ft_isascii.c	ft_strlcpy.c		ft_strlcat.c	\
					ft_strchr.c		ft_strrchr.c		ft_toupper.c	\
					ft_tolower.c	ft_strdup.c			ft_split.c		\
					ft_strncmp.c	ft_strnstr.c		ft_itoa.c		\
					ft_putchar_fd.c	ft_putstr_fd.c		ft_putendl_fd.c	\
					ft_putnbr_fd.c	ft_bzero.c			ft_memset.c		\
					ft_memcpy.c		ft_memmove.c		ft_memcmp.c		\
					ft_substr.c		ft_strjoin.c		ft_strtrim.c	\
					ft_memchr.c		ft_strmapi.c		ft_striteri.c	
BONUS			=	ft_lstnew.c		ft_lstadd_front.c	ft_lstadd_back.c	\
					ft_lstsize.c	ft_lstlast.c		ft_lstdelone.c		\
					ft_lstiter.c	
# *** TO-DO *** #
# ft_calloc.c	#
# ft_lstclear.c	#
# ft_lstmap.c	#
# *** RULES ****************************************************************** #
$(NAME)			:
					@$(AR) $(NAME)
					@make -C ../ all
					@make -C ../ clean
					@make -C ../ fclean
					@make -C ../ re
					@make -C ../ clean
					cp ../$(NAME) $(NAME)
all				:	$(NAME)
clean			:
fclean			:	clean
					@$(RM) $(NAME)
re				:	fclean all
.PHONY			:	all clean fclean re
# *** TESTS ****************************************************************** #
COMP			=	$(@:%.out=%.c)
LINK			=	-L./ -lft --include ../libft.h
%.out			:
					@$(CC) $(CFLAGS) $(COMP) $(LINK) -o $@
					@echo Program created: ./$@
PROG			=	$(SRC:%.c=%.out)
BPROG			=	$(BONUS:%.c=%.out)
test			:	delete $(PROG)
bonus			:	delete $(BPROG)
test_all		:	$(PROG) $(BPROG)
delete			:	clean
					@$(RM) $(PROG) $(BPROG)
					@echo Programs deleted.
