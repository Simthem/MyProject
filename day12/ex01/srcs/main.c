/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:09:45 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/11 20:22:26 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_fct.h"

int		check_files(char **argv, int ret, int fd, int i)
{
	char	buf[BUF_SIZE + 1];

	fd = open(argv[i], O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	if (ret == -1)
	{
		ft_putstr(argv[i]);
		ft_putstr(" : Is a Directory\n");
		return (0);
	}
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		val;
	int		*ret;

	i = 0;
	val = 0;
	ret = &val;
	if (argc < 2)
		return (0);
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd != -1)
		{
			check_files(argv, *ret, fd, i);
			close(fd);
		}
		else if (errno == 2)
			ft_putstr("No such file or directory\n");
	}
	return (0);
}
