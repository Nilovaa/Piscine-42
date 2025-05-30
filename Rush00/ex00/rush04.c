/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:04:25 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/10 12:16:03 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	c_y;
	int	c_x;

	c_y = 1;
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			if ((c_x == 1 && c_y == 1) || (c_y == y && c_x == x))
				ft_putchar('A');
			else if ((c_y == 1 && c_x > 1 && c_x < x)
				|| (c_y == y && c_x > 1 && c_x < x))
				ft_putchar('B');
			else if ((c_y == 1 && c_x == x) || (c_y == y && c_x == 1))
				ft_putchar('C');
			else if ((c_y < y && c_x == 1) || (c_y < y && c_x == x))
				ft_putchar('B');
			else
				write(1, " ", 1);
			c_x++;
		}
		write(1, "\n", 1);
		c_y++;
	}
}
