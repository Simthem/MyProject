/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:26:19 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/17 19:45:05 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			if (argv[1][i] == '\0')
			{
				i = 0;
				while (argv[1][i])
				{
					write(1, &argv[1][i], 1);
					i++;
				}
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
