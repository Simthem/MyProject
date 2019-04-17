/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:15:11 by exam              #+#    #+#             */
/*   Updated: 2019/04/16 17:36:22 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	if (!(str[i] >= 48 && str[i] <= 57))
		return (-1);
	while (str[i] >= 48 && str[i] <= 57)
	{
		k = k * 10 + (str[i] - '0');
		i++;
	}
	return (k);
}

int		ft_is_prime(int nb)
{
	int temp;

	temp = 5;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (nb);
	if (nb == 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (temp <= (nb / 2))
	{
		if (nb % temp == 0)
			return (0);
		temp += 2;
	}
	return (nb);
}

void	ft_putnbr(nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		main(int argc, char *argv[])
{
	int count;
	int temp;
	int nb;

	count = 2;
	nb = 0;
	temp = ft_atoi(argv[1]);
	if (argc == 2)
	{
		while (count <= temp && temp <= 225286)
		{
			nb = nb + ft_is_prime(count);
			count++;
		}
	}
	ft_putnbr(nb);
	ft_putchar('\n');
	return (0);
}
