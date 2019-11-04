/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:29:04 by avenonat          #+#    #+#             */
/*   Updated: 2019/08/18 22:45:42 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "eval_expr.h"

int		search_number(char **sym)
{
	int nbr;

	while (**sym == ' ')
		(*sym)++;
	if (**sym == '(')
	{
		(*sym)++;
		nbr = search_sum(sym);
		if (**sym == ')')
			(*sym)++;
		return (nbr);
	}
	return (ft_atoi(sym));
}

int		search_factors(char **sym)
{
	int		nbr;
	int		nbr2;
	char	th;

	nbr = search_number(sym);
	while (**sym)
	{
		while (**sym == ' ')
			(*sym)++;
		th = **sym;
		if (th != '*' && th != '/' && th != '%')
			return (nbr);
		(*sym)++;
		nbr2 = search_number(sym);
		if (th == '*')
			nbr *= nbr2;
		else if (th == '/')
			nbr /= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		search_sum(char **sym)
{
	int		nbr;
	int		nbr2;
	char	th;

	nbr = search_factors(sym);
	while (**sym)
	{
		while (**sym == ' ')
			(*sym)++;
		th = **sym;
		if (th != '+' && th != '-')
			return (nbr);
		(*sym)++;
		nbr2 = search_factors(sym);
		if (th == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *sym)
{
	return (search_sum(&sym));
}
