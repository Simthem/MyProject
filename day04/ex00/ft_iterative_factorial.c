/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:23:27 by sithemio          #+#    #+#             */
/*   Updated: 2019/03/30 11:36:04 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int temp;

	temp = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1 || nb == 2)
		return (nb);
	while (nb >= 2)
	{
		temp = temp * (nb - 1);
		nb--;
	}
	return (temp);
}
