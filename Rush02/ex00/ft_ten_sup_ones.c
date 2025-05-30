/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_sup_ones.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syandria <syandria@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:37:44 by syandria          #+#    #+#             */
/*   Updated: 2024/11/24 16:37:47 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

void	ft_powerd(int powered, char *c)
{
	if (powered >= 3)
	{
		write(1, " ", 1);
		ft_ten_power(powered, c);
	}
}

void	ft_ten_sup_one(char *c, char *nb, int powered)
{
	int		i;
	char	nub[3];

	i = 1;
	if (nb[i + 1] == '0')
	{
		nub[0] = nb[1];
		nub[1] = '0';
		nub[2] = '\0';
		write (1, " ", 1);
		ft_strstr(c, nub);
		ft_powerd(powered, c);
	}
	else
	{
		nub[0] = nb[1];
		nub[1] = '0';
		nub[2] = '\0';
		write (1, " ", 1);
		ft_strstr(c, nub);
		ft_unity(c, nb, powered);
	}
}
