/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:06:32 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/07 22:34:23 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define X 9

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
