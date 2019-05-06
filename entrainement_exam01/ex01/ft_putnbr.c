/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:22:51 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/05 14:41:10 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int s;

	if (nb < 0)
	{
		s = -nb;
		ft_putchar('-');
	}
	else
		s = nb;
	if (s >= 10)
		ft_putnbr(s / 10);
	ft_putchar(s % 10 + '0');
}

int		main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
