# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndabbous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 16:32:54 by ndabbous          #+#    #+#              #
#    Updated: 2024/11/25 17:02:12 by ndabbous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ./
AR = ar -rcs

SRCS = 	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	     ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
	     ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

bonus : $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
