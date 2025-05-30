/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syandria <syandria@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:03 by syandria          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:08 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

void	ft_unity(char *c, char *nb, int powered)
{
	char	nub[2];

	nub[0] = nb[2];
	nub[1] = '\0';
	write(1, " ", 1);
	ft_strstr(c, nub);
	if (powered >= 3)
	{
		write(1, " ", 1);
		ft_ten_power(powered, c);
	}
}
