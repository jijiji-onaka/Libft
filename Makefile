# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 20:15:31 by tjinichi          #+#    #+#              #
#    Updated: 2020/11/22 19:04:38 by tjinichi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SRCS =	srcs/ft_atoi.c \
		srcs/ft_bzero.c \
		srcs/ft_calloc.c \
		srcs/ft_isalnum.c \
		srcs/ft_isalpha.c \
		srcs/ft_isascii.c \
		srcs/ft_isdigit.c \
		srcs/ft_isprint.c \
		srcs/ft_itoa.c \
		srcs/ft_memccpy.c \
		srcs/ft_memchr.c \
		srcs/ft_memcmp.c \
		srcs/ft_memcpy.c \
		srcs/ft_memmove.c \
		srcs/ft_memset.c \
		srcs/ft_putchar_fd.c \
		srcs/ft_putendl_fd.c \
		srcs/ft_putnbr_fd.c \
		srcs/ft_putstr_fd.c \
		srcs/ft_split.c \
		srcs/ft_strchr.c \
		srcs/ft_strdup.c \
		srcs/ft_strjoin.c \
		srcs/ft_strlcat.c \
		srcs/ft_strlcpy.c \
		srcs/ft_strlen.c \
		srcs/ft_strmapi.c \
		srcs/ft_strncmp.c \
		srcs/ft_strnstr.c \
		srcs/ft_strrchr.c \
		srcs/ft_strtrim.c \
		srcs/ft_substr.c \
		srcs/ft_tolower.c \
		srcs/ft_toupper.c \
		srcs/ft_isspace.c \
		srcs/ft_stoi.c \
		srcs/ft_stod.c \
		srcs/GNL/get_next_line.c \
		srcs/GNL/get_next_line_utils.c \
		srcs/ft_check_file_tail.c \
		srcs/count_2d.c \
		srcs/array_free_2d.c \
		srcs/ft_numlen.c \
		srcs/create_file_name.c \
		srcs/ft_stov.c \
		srcs/ft_strcmp.c \
		srcs/joint_number.c \
		srcs/file_tail_number.c


BONUS =	srcs/ft_lstadd_back.c \
		srcs/ft_lstadd_front.c \
		srcs/ft_lstclear.c \
		srcs/ft_lstiter.c \
		srcs/ft_lstlast.c \
		srcs/ft_lstnew.c \
		srcs/ft_lstsize.c \
		srcs/ft_lstdelone.c \
		srcs/ft_lstmap.c \

OBJS = $(SRCS:.c=.o)
BONUSOBJS = $(BONUS:.c=.o)

$(NAME): $(OBJS)
	make -C ./srcs/libvec3D
	cp ./srcs/libvec3D/libvec.a $(NAME)
	ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
	make clean -C ./srcs/libvec3D
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	make fclean -C ./srcs/libvec3D
	$(RM) $(NAME)

re:	fclean all

bonus:	all $(BONUSOBJS)
	ar rcs $(NAME) $(BONUSOBJS)

.PHONY:	all clean fclean re bonus
