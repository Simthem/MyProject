/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:20:12 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/07 22:49:13 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define X 9

int		sudoku(int grid[X][X]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sudoku_print(int grid[X][X])
{
	int i;
	int j;

	i = 0;
	while (i < X)
	{
		j = 0;
		while (j < X)
		{
			ft_putchar(grid[i][j] % 10 + '0');
			j++;
			if (j != X)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(void)
{
	    int grid[X][X] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};
	if (sudoku(grid) == 1)
		sudoku_print(grid);
	else
		write(1, "error\n", 6);
	return (0);
}
