/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:26:14 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 13:23:05 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "all_lib.h"

void	ft_hundred(char *c, char *nb, int powered)
{
	char	nub[2];

	nub[0] = nb[0];
	nub[1] = '\0';
	write(1, " ", 1);
	ft_strstr(c, nub);
	write(1, " ", 1);
	ft_strstr(c, "100");
	if (nb[1] == '0' && nb[2] == '0')
	{
		if (powered >= 3)
		{
			write(1, " ", 1);
			ft_ten_power(powered, c);
		}
	}
}

void	ft_hundred1(char *c, char *nb, int powered)
{
	char	nub[2];

	nub[0] = nb[0];
	nub[1] = '\0';
	ft_strstr(c, nub);
	write(1, " ", 1);
	ft_strstr(c, "100");
	if (nb[1] == '0' && nb[2] == '0')
	{
		if (powered >= 3)
		{
			write(1, " ", 1);
			ft_ten_power(powered, c);
		}
	}
}
