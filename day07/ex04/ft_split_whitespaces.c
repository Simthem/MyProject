/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:42:41 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/04 23:23:48 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(char *str)
{
	int i;
	int count_words;

	i = 0;
	count_words = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			count_words++;
		i++;
		if (str[i] == '\0')
			count_words++;
	}
	return (count_words);
}

int		ft_count_char(char *str)
{
	int i;
	int count_char;

	i = 0;
	count_char = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			count_char++;
		i++;
	}
	return (count_char);
}

int		ft_find_blank(char c)
{
	if (c != '\0')
	{
		if (c == ' ' || c == '\t' || c == '\n')
			return (1);
		return (0);
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**new1;
	char	*new2;

	i = 0;
	j = 0;
	if (!(new1 = (char **)malloc(sizeof(*new1) * (ft_count_words(str) + 2))))
		return (0);
	while (str[i])
	{
		if (ft_find_blank(str[i]) == 1)
			i++;
		if (ft_find_blank(str[i]) == 0)
		{
			new2 = (char *)malloc(sizeof(*new2) * (ft_count_char(str) + 1));
			while (ft_find_blank(str[i]) == 0)
			{
				new2[j] = str[i];
				j++;
				i++;
			}
			new2[j]
		}
	}
}
