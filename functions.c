/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:01:24 by avenonat          #+#    #+#             */
/*   Updated: 2019/08/18 23:07:12 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int		ft_atoi(char **str)
{
	int k;

	k = 0;
	while (**str >= '0' && **str <= '9')
	{
		k = k * 10 + (**str - '0');
		(*str)++;
	}
	return (k);
}

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		my_putchar((nb % 10) + '0');
	}
	if ((nb < 0) && nb != (-2147483648))
	{
		my_putchar('-');
		ft_putnbr(nb * (-1));
	}
	if (nb == -2147483648)
	{
		my_putchar('-');
		my_putchar('2');
		ft_putnbr(147483648);
	}
}
