/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:25:57 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 12:25:58 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

char	*ft_div(char *nu)
{
	int		len;
	int		j;
	int		i;
	char	*size;

	len = ft_strlen(nu);
	j = 0;
	while (len % 3 != 0)
	{
		len++;
		j++;
	}
	size = malloc (sizeof (char) * (len));
	if (!size)
		return (0);
	i = 0;
	while (j > 0)
	{
		size[i] = '0';
		i++;
		j--;
	}
	ft_strcat(size, nu);
	return (size);
}
