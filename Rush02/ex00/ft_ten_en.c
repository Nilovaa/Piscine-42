/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_en.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:27:38 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 12:27:40 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

void	ft_ten_en(char *c, char *nb, int powered)
{
	int		i;
	char	nub[3];

	i = 1;
	if (nb[i] == '1')
	{
		nub[0] = nb[1];
		nub[1] = nb[2];
		nub[2] = '\0';
		write (1, " ", 1);
		ft_strstr(c, nub);
		if (powered >= 3)
		{
			write(1, " ", 1);
			ft_ten_power(powered, c);
		}
	}
	else if (nb[i] > 1)
		ft_ten_sup_one(c, nb, powered);
}
