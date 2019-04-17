/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 14:38:34 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/16 14:44:10 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || (argv[1][i] >= 'A'
						&& argv[1][i] < 'Z'))
				argv[1][i] += 1;
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			else
				argv[1][i] = argv[1][i];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
