/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syandria <syandria@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:13 by syandria          #+#    #+#             */
/*   Updated: 2024/11/24 16:39:32 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

void	ft_write(char *nz, char *c)
{
	int		powered;
	char	*tab;
	char	*new;

	new = ft_div(nz);
	if (ft_is_zero(new) == 1)
		ft_strstr(c, "0");
	powered = ft_strlen(new);
	tab = malloc(sizeof (char) * 3);
	ft_write_loop(c, new, tab, powered);
	write(1, "\n", 1);
	free(tab);
}
