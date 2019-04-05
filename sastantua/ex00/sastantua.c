/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:25:21 by sithemio          #+#    #+#             */
/*   Updated: 2019/03/31 21:43:11 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int size, int floor, int nbfloors)
{
	int finalstars;
	char star;
	int count;

	finalstars = 2 * nbfloors - 1;
	star = floor + 2;
	count = 1;

	while (count <= star)
	{
		ft_putchar('*');
		count++;
	}
}

void	sastantua(int size)
{
	int step;
	int floor;
	int nbfloors;

	
	step = 1;
	nbfloors = 3;
	while (step <= size)
	{
		floor = 1;
		while (floor <= nbfloors)
		{
			ft_putchar('/');
			ft_print(size, floor, nbfloors);
			ft_putchar('\\');
			ft_putchar('\n');
			floor++;
		}
		step++;
		nbfloors++;
	}
}

int 	main(void)
{
	sastantua(3);
	return (0);
}
