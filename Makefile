# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avenonat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/17 18:51:37 by avenonat          #+#    #+#              #
#    Updated: 2019/08/18 22:44:49 by avenonat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = *.c

ABC = *.o
all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@gcc $(ABC) -o $(NAME)

clean:
	@rm -f $(ABC)

fclean: clean
	@rm -f $(NAME)

re: fclean all
