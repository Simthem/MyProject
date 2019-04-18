/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:02:50 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/17 14:19:41 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_verif(char *dest, char *argv)
{
	int k;

	k = 0;
	while (dest[k])
	{
		if (*argv == dest[k])
			return (0);
		k++;
	}
	return (1);
}

void	ft_first_verif(char *dest, char *argv[], int *k, int count)
{
	int i;

	i = 0;
	while (argv[count][i])
	{
		if (ft_verif(dest, &argv[count][i]))
		{
			dest[*k] = argv[count][i];
			(*k)++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		count;
	int		j;
	int		*k;
	char	dest[26];

	count = 1;
	j = 0;
	k = &j;
	if (argc == 3)
	{
		ft_first_verif(dest, argv, k, count);
		count++;
		ft_first_verif(dest, argv, k, count);
		ft_putstr(dest);
	}
	dest[*k] = '\0';
	write(1, "\n", 1);
	return (0);
}
