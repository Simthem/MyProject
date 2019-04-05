/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 12:00:47 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/04 21:00:31 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_number_char_params(int argc, char *argv[])
{
	int i;
	int j;
	int count;

	i = 1;
	count = 1;
	if (argc != 0)
	{
		while (i != argc)
		{
			j = 0;
			while (argv[i][j])
			{
				j++;
				count++;
			}
			i++;
		}
		return (count);
	}
	return (0);
}

int		ft_strparams(char *str, int argc, char *argv[], int k)
{
	int i;
	int j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i != argc)
			str[k] = "\n";
		k++;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		count;
	int		k;
	int		*p;

	k = 0;
	count = ft_number_char_params(argc, argv);
	if (count != 0)
	{
		if (!(str = (char *)malloc(sizeof(*str) * (count + 1))))
			return (NULL);
		*p = ft_strparams(str, argc, argv, k);
		str[*p] = '\0';
	}
	return (str);
}
