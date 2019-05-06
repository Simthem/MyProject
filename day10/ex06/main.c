/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:50:15 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/09 19:08:56 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_result(int *p1, char *p2, int *p3, int result)
{
	if (*p2 == '*')
		result = *p1 * *p3;
	if (*p2 == '+')
		result = *p1 + *p3;
	if (*p2 == '-')
		result = *p1 - *p3;
	if (*p2 == '/')
		result = *p1 / *p3;
	if (*p2 == '%')
		result = *p1 % *p3;
	return (result);
}

void	ft_mod_div(char *argv)
{
	if (*argv == '/')
		ft_putstr("Stop : division by zero\n");
	if (*argv == '%')
		ft_putstr("Stop : modulo by zero\n");
}

int		main(int argc, char *argv[])
{
	int *p1;
	int *p3;
	int i;
	int *p;

	i = 0;
	p = &i;
	if (argc != 4)
		return (0);
	if (!(p1 = (int*)malloc(sizeof(*p1) * (ft_strlen(argv[1]) + 1))) ||
			!(p3 = (int*)malloc(sizeof(*p3) * (ft_strlen(argv[3]) + 1))))
		return (0);
	*p1 = ft_atoi(argv[1]);
	*p3 = ft_atoi(argv[3]);
	if (argv[2])
	{
		if ((*argv[2] == '/' || *argv[2] == '%') && *p3 == 0)
		{
			ft_mod_div(argv[2]);
			return (0);
		}
		ft_putnbr(ft_result(p1, argv[2], p3, *p));
		ft_putchar('\n');
	}
	return (0);
}
