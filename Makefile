# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhanda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 09:01:53 by selhanda          #+#    #+#              #
#    Updated: 2021/11/04 17:35:32 by selhanda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRC=ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c\
	ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_strchr.c ft_memset.c ft_memmove.c\
	ft_memcpy.c ft_memcmp.c ft_memchr.c ft_isprint.c ft_isdigit.c ft_isascii.c\
	ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c ft_islower.c\
    ft_isupper.c ft_strjoin.c ft_strdup.c ft_substr.c ft_strtrim.c ft_split.c\
	ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
	ft_strmapi.c ft_striteri.c

BSRC=ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJ=$(SRC:.c=.o)
OBJB=$(BSRC:.c=.o)

all: creatobj $(NAME)
creatobj:
	$(CC) -c $(CFLAGS) $(SRC)
$(NAME):
	ar rcs $(NAME) $(OBJ)
creatbobj: creatobj
	$(CC) -c $(CFLAGS) $(BSRC)
bonus: creatbobj creatobj
	ar rcs $(NAME) $(OBJ) $(OBJB)
clean:
	rm -rf $(OBJ)
	rm -rf $(OBJB)
fclean:clean
	rm -f $(NAME)
re:fclean all

