/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_evalexpr.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:50:01 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/15 13:17:11 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVALEXPR_H
# define FT_EVALEXPR_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);
int		eval_expr(char *str);
int		sum(char **expr);
int		factors(char **expr);
int		numbers(char **expr);

#endif
