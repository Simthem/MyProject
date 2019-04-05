/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 16:12:58 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/04 15:26:02 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (src[i] == '\0')
		return (NULL);
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	while (j <= i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}
