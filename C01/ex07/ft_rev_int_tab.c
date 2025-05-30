/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:51:28 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/10 16:31:13 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int tab[], int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}

int main(int *tab, int size)
{
	#include <stdio.h>
	int tab[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	while(i < 8)
	{
		printf("%d", ft_rev_int_tab(tab[i],8));
		i++;
	}
	return 0;
}
