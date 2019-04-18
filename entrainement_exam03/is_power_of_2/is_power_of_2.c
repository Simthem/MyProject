/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 23:50:02 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/18 00:24:18 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	unsigned int x;

	x = 2;
	while (x < (n / 2))
	{
		x *= 2;
		if (x == (n / 2))
			return (1);
	}
	return (0);
}

/*
int		is_power_of_2_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}
*/

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", is_power_of_2(atoi(argv[1])));
//		printf("%d", is_power_of_2_2(atoi(argv[1])));
	}
	return (0);
}
