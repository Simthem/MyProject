/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 19:23:26 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/02 17:45:35 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *dest)
{
	int i;

	i = 0;
	while (dest[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int k;
	unsigned int j;

	i = 0;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	if (size - 1 <= j)
		return (k + size);
	while (j + i < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + k);
}
