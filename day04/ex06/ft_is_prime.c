/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:38:36 by sithemio          #+#    #+#             */
/*   Updated: 2019/03/30 21:33:04 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_is_prime(int nb)
{
	int temp;

	temp = 3;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (temp * temp <= nb)
	{
		if (nb % temp == 0)
			return (0);
		temp += 2;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_is_prime(atoi(argv[1])));
	return (0);
}
