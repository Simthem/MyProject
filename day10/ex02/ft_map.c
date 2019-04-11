/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:06:49 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/09 13:57:01 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *arr;

	i = 0;
	if (!(arr = (int*)malloc(sizeof(*arr) * (lenght))))
		return (0);
	while (i < lenght)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (arr);
}
