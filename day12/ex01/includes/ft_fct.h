/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:07:36 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/11 20:45:36 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCT_H
# define FT_FCT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>

# define BUF_SIZE 4096

void	ft_putstr(char *str);
int		ft_putchar(char c);

#endif
