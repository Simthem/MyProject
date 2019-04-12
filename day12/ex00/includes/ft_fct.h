/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 16:59:26 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/11 20:43:48 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_FCT_H
# define FT_FCT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>

# define BUF_SIZE 32768

void	ft_putstr(char *str);
int		ft_putchar(char c);

#endif
