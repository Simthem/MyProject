/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 12:19:37 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/16 12:27:59 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 4)
	{
		if (argv[2][i + 1] == '\0' && argv[3][i + 1] == '\0')
		{
			while (argv[1][i])
			{
				if (*argv[2] == argv[1][i])
					argv[1][i] = argv[3][0];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}