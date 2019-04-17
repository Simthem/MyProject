/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:45:02 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/16 12:12:56 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_repeat(char *argv[], int i)
{
	int count;

	if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		count = argv[1][i] - 96;
	else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		count = argv[1][i] - 64;
	else
		count = 1;
	while (count)
	{
		write(1, &argv[1][i], 1);
		count--;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int count;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			print_repeat(argv, i);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
