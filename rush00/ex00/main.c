/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagilfix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:38:28 by jagilfix          #+#    #+#             */
/*   Updated: 2019/03/31 19:42:33 by jagilfix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	if (*str == '\f' || *str == '\r' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == ' ')
		return (ft_atoi(++str));
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign = -1;
	while ((*str >= '0') && (*str <= '9'))
		result = result * 10 + *(str++) - '0';
	return ((int)(sign * result));
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
