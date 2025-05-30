/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanraman <fanraman@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:34:28 by fanraman          #+#    #+#             */
/*   Updated: 2024/11/16 14:52:49 by fanraman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(char **cara);

int check_error(int nb, char **cara);

int main(int ac, char **av)
{
	int i;

	i = 0;
	if(check_error(ac, av) == 0)
	{
		write(1, "Error\n",6);
		return (0);
	}
	rush(av);
	return (0);
}
