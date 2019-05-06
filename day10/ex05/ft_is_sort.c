/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:22:36 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/09 18:55:47 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (tab[count] == '\0')
		return (0);
	while (count + 1 < lenght)
	{
		if (f(tab[i]i, tab[i + 1] >= 0))
			return (0);
		i++;
	}
	return (1);
}
