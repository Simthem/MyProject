/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:19:18 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/17 20:37:45 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ope(char *argv, int p1, int p3)
{
	int result;

	if (*argv == '+')
		result = p1 + p3;
	if (*argv == '-')
		result = p1 - p3;
	if (*argv == '/')
		result = p1 / p3;
	if (*argv == '*')
		result = p1 * p3;
	return (result);
}

int		main(int argc, char *argv[])
{
	int p1;
	int p3;

	if (argc == 4)
	{
		p1 = atoi(argv[1]);
		p3 = atoi(argv[3]);
		printf("%d\n",ft_ope(argv[2], p1, p3));
	}
	else
		write(1, "\n", 1);
	return (0);
}
