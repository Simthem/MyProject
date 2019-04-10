/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 15:31:09 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/07 22:40:34 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define X 9
int		check_empty_place(int grid[X][X]);
int		alright(int grid[X][X], int line, int col, int nb);
int		check_line(int grid[X][X], int line, int nb);
int		check_col(int grid[X][X], int col, int nb);
int		check_block(int grid[X][X], int begline_blo, int begcol_blo, int nb);
int		find_empty_col(int grid[X][X], int line);
int		sudoku(int grid[X][X]);

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
