/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_loop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syandria <syandria@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:45 by syandria          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:48 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

void	ft_write_loop(char *c, char *news, char *tab, int powered)
{
	int	i;
	int	j;

	i = 0;
	while (news[i])
	{
		j = 0;
		while (j < 3)
		{
			tab[j] = news[i];
			j++;
			i++;
			powered--;
		}
		j = 0;
		if (tab[j] != '0')
			ft_hundred(c, tab, powered);
		if (tab[j + 1] != '0')
			ft_ten_en(c, tab, powered);
		else if (tab[j + 1] == '0')
		{
			if (tab[j + 2] != '0')
				ft_unity(c, tab, powered);
		}
	}
}
