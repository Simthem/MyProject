/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:57:09 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/15 13:19:36 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_evalexpr.h"

int		number(char **expr)
{
	int nb;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nb = sum(expr);
		if (**expr == ')')
			(*expr)++;
		return (nb);
	}
	return (ft_atoi(expr));
}

int		factors(char **expr)
{
	int		nb1;
	int		nb2;
	char	ope;

	nb1 = number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		ope = **expr;
		if (ope != '/' && ope != '*' && ope != '%')
			return (nb1);
		(*expr)++;
		nb2 = number(expr);
		if (ope == '/')
			nb1 /= nb2;
		else if (ope == '*')
			nb1 *= nb2;
		else
			nb1 %= nb2;
	}
	return (nb1);
}

int		sum(char **expr)
{
	int nb1;
	int nb2;
	int ope;

	nb1 = factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		ope = **expr;
		if (ope != '-' && ope != '+')
			return (nb1);
		(*expr)++;
		nb2 = factors(expr);
		if (ope == '-')
			nb1 -= nb2;
		else
			nb1 += nb2;
	}
	return (nb1);
}

int		eval_expr(char *expr)
{
	return (sum(&expr));
}
