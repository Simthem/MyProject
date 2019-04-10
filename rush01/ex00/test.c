/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:40:49 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/07 22:06:05 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define X 9

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_empty_place(int grid[X][X])
{
	int line;
	int col;

	line = 0;
	col = 0;
	while (line < X)
	{
		col = 0;
		while (col < X)
		{
			if (grid[line][col] == 0)
				return (line);
			col++;
		}
		line++;
	}
	return (9);
}

int		find_empty_col(int grid[X][X], int line)
{
	int row;
	int col = 0;

	row = line;
	while (line < X)
	{
		col = 0;
		while (col < X)
		{
			if (grid[row][col] == 0)
				return (col);
			col++;
		}
		line++;
	}
	return (0);
}

int		check_line(int grid[X][X], int line, int nb)
{
	int col;

	col = 0;
	while (col < X)
	{
		if (grid[line][col] == nb)
			return (1);
		col++;
	}
	return (0);
}

int		check_col(int grid[X][X], int col, int nb)
{
	int line;

	line = 0;
	while (line < X)
	{
		if (grid[line][col] == nb)
			return (1);
		line++;
	}
	return (0);
}

int		check_block(int grid[X][X], int begline_blo, int begcol_blo, int nb)
{
	int line;
	int col;

	line = 0;
	col = 0;
	while (line < 3)
	{
		while (col < 3)
		{
			if (grid[begline_blo + line][begcol_blo + col] == nb)
				return (1);
			col++;
		}
		line++;
	}
	return (0);
}

int		alright(int grid[X][X], int line, int col, int nb)
{
	int checkline = check_line(grid, line, nb);
	int checkcol = check_col(grid, col, nb);
	int checkblock = check_block(grid, line - line % 3, col - col % 3, nb);

	if (checkline == 0 && checkcol == 0 && checkblock == 0 && grid[line][col] == 0)
		return (1);
	return (0);
}

int		sudoku(int grid[X][X])
{
	int line;
	int col;
	int nb;
	int can_move;
	int recur;

	line = check_empty_place(grid);
	col = find_empty_col(grid, line);
	nb = 1;
	if (line == 9)
	{
		return (1);
	}
	while (nb <= 9)
	{
		can_move = alright(grid, line, col, nb);
		if (can_move == 1)
		{
			grid[line][col] = nb;
			recur = sudoku(grid);
			if (recur == 1)
				return (1);
			grid[line][col] = 0;
		}
		nb++;
	}
	return (0);
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


