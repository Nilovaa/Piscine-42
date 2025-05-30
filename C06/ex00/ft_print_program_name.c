/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:33:26 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/23 19:07:23 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	ac = 0;
	i = 0;
	while (av[ac][i] != '\0')
	{
		ft_putchar(av[ac][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
