/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sithemio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 23:57:52 by sithemio          #+#    #+#             */
/*   Updated: 2019/04/05 01:32:43 by sithemio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*ampm1;
	char	*ampm2;
	int		hour1;
	int		hour2;

	if (hour == 0)
		hour1 = 12;
	else
		hour1 = hour > 12 ? hour - 12 : hour;
	ampm1 = hour < 12 ? "A.M." : "P.M.";
	hour2 = (hour == 0) || (hour == 12) ? 1 : hour + 1;
	hour2 = hour2 > 12 ? hour2 - 12 : hour2;
	ampm2 = hour == 11 ? "P.M" : ampm1;
	if (hour == 23)
		ampm2= "A.M.";
	if (hour >= 0 && hour < 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
				hour1, ampm1, hour2, ampm2);

}
