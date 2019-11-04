/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 16:34:48 by avenonat          #+#    #+#             */
/*   Updated: 2019/08/18 23:07:25 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

int		searh_number(char **sym);
int		search_factors(char **sym);
int		search_sum(char **sym);
int		eval_expr(char *str);

#endif
