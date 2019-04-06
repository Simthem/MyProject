/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:28:14 by sithemio          #+#    #+#             */
/*   Updated: 2019/03/30 21:32:44 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int temp;

	temp = 7;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (temp <= nb / temp)
	{
		if (nb % temp == 0)
			return (0);
		temp += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int temp;

	temp = ft_is_prime(nb);
	if (temp == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
