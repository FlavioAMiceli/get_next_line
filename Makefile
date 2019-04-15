#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: fmiceli <fmiceli@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/06 16:28:44 by fmiceli       #+#    #+#                  #
#    Updated: 2019/02/06 16:29:56 by fmiceli       ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME=get_next_line
LIBFT=libft.a
SRCS=get_next_line.c
OBJS=$(SRCS:.c=.o)
TESTSRC=gnl_test.c
VPATH=/libft
FLAGS= -Wall -Wextra -Werror

all : $(LIBFT) $(NAME) clean

$(NAME) :
	@gcc -c $(SRCS) $(FLAGS) -I./ -I./libft/

$(LIBFT) :
	@make -C ./libft/

test : $(LIBFT) $(NAME)
	@gcc $(TESTSRC) $(OBJS) -o gnl_test $(FLAGS) -L ./libft/ -I ./libft/ -lft
	@make clean
	@rm -f *.o

clean :
	@rm -f *~
	@rm -f \#*.c\#
	@make clean -C ./libft/

fclean : clean
	@rm -f *.o
	@rm -f gnl_test
	@make fclean -C ./libft/

re : fclean all
