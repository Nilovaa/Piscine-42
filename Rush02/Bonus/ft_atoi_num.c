/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:25:25 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 13:52:28 by syandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all_lib.h"

char	*ft_atoi_num(char *str)
{
	int			i;
	int			j;
	char		*result;

	i = 0;
	j = 0;
	result = malloc (sizeof (char) * ft_strlen(str));
	if (!result)
		return (NULL);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '0') && j == 0)
		i++;
	if ((str[i] >= '1' && str[i] <= '9') && j == '0')
		result[j] = str[i];
	while ((str[i] >= '0' && str[i] <= '9') && j != '0')
	{
		result[j] = str[i];
		j++;
		i++;
	}
	result[j] = '\0';
	return (result);
}
