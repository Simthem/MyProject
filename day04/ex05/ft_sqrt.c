/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 11:16:25 by sithemio          #+#    #+#             */
/*   Updated: 2019/03/30 21:28:50 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb)
{
	int temp;

	temp = 2;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (temp * temp <= nb)
	{
		if (temp * temp == nb)
			return (temp);
		temp++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}
