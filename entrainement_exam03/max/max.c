/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:36:45 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/17 19:46:28 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;

	i = 0;
	while (i < len && tab[i])
	{
		if (tab[0] < tab[i])
			tab[0] = tab[i];
		i++;
	}
	return (tab[0]);
}

int		main(void)
{
	int tab[7] = {56, 10, 82, 95, 99, 35, 118};
	unsigned int len = 18;
	printf("%d", max(tab, len));
	return (0);
}
