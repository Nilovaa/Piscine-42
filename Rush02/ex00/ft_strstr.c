/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nyrakoto <nyrakoto@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 12:27:23 by nyrakoto          #+#    #+#             */
/*   Updated: 2024/11/24 18:53:04 by nyrakoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "all_lib.h"

unsigned int	find_substring(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

void	write_lowercase_until_newline(char *str, unsigned int i)
{
	while (str[i] != '\n')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		i++;
	}
}

void	ft_strstr(char *str, char *to_find)
{
	unsigned int	index;

	index = find_substring(str, to_find);
	if (index != (unsigned int)-1)
		write_lowercase_until_newline(str, index);
}
