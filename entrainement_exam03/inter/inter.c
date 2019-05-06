/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:38:38 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/17 14:24:04 by sithemio         ###   ########.fr       */
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

// a revoir, main de 28 lignes mais passe en exam

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char dest[26];

	i = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && ft_verif(dest, &argv[2][j]))
				{
					dest[k] = argv[2][j];
					k++;
				}
				j++;
			}
			i++;
		}
		dest[k] = '\0';
		ft_putstr(dest);
	}
	write(1, "\n", 1);
	return (0);
}
